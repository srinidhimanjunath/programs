#include<iostream>
using namespace std;

class stack
{
		int a[20];
		int top;
		int n;
		public:
			void read()
			{
				cout<<"Enter the stack size\n";
				cin>>n;
				top=-1;
			}
			stack operator +(int item)
			{
				if(top==n-1)
				cout<<"Stack is empty\n";
				else
				{
					a[++top]=item;
				}
			}
			stack operator-()
			{
				if(top==-1)
				cout<<"Empty stack\n";
				else
				{
					cout<<"The deleted element is :"<<a[top];
					top--;
				}
			}
			friend ostream &operator<<(ostream &cout,stack &s)
			{
				if(s.top==-1)
				cout<<"Stack is empty\n";
				else
				{
				cout<<"The contents of the stack are:";
				for(int i=0;i<=s.top;i++)
				{
					cout<<s.a[i];
				}
			}
				
			}
};
int main()
{
	stack s;
	int  ch,item;
	s.read();
	while(1)
	{
		cout<<"1.Insert\n2.Delete\n3.Display\n4.Exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter the item to be inserted\n";
				cin>>item;
				s+item;
				break;
			case 2:
				-s;
				break;
			case 3:
				cout<<s;
			case 4:  break;
			
		}
	}
	return 0;
}
