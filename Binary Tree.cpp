#include<iostream>
using namespace std;

struct node
{
	struct node *left;
	struct node *right;
	int data;
};

class tree
{
	public:
	void add(node **R,int ele)	
	{
		if((*R)==NULL)
		{
			*R=new node;
			(*R)->data=ele;
			(*R)->right=(*R)->left=NULL;
		}
		else if((*R)->data>ele)
		{
			add(&(*R)->left,ele);
		}
		else if((*R)->data<ele)
		{
			add(&(*R)->right,ele);
		}
	}
	void inorder(node *r)
	{
		if(r!=NULL)
		{
			inorder(r->left);
			cout<<r->data<<"\t";
			inorder(r->right);
		}
	}
	void postorder(node *r)
	{
		if(r!=NULL)
		{
			postorder(r->left);
			postorder(r->right);
			cout<<r->data<<"\t";
		}
	}
	void preorder(node *r)
	{
		if(r!=NULL)
		{
			cout<<r->data<<"\t";
			preorder(r->left);
			preorder(r->right);
		}
	}
};
int main()
{
	tree bin;
	node *r=NULL;
	int ele,n;
	cout<<"Enter  the number of nodes to be created\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the element to be inserted\n";
		cin>>ele;
		bin.add(&r,ele);
	}
	cout<<"Inorder Traversal:";
	bin.inorder(r);
	cout<<"\n";
	cout<<"Preorder Traversal:";
	bin.preorder(r);
	cout<<"\n";
	cout<<"Postorder Traversal:";
	bin.postorder(r);
	cout<<"\n";
	return 0;
}
