#include<iostream>
using namespace std;

class  except
{
	double a,b;
	public:
		void read()
		{
			cout<<"Enter two double value\n";
			cin>>a>>b;
			
		}
		void div()
		{
			try
			{
				if(cin.fail())
				throw "Bad Input";
				else if(b==0)
				throw 0;
				else
				cout<<"Ans is:"<<a/b;
			}
			catch(const int n)
			{
				cout<<"Divide by "<<n<<"is not possible\n";
			}
			catch(const char *str)
			{
				cout<<str;
			}
		}
	
};
int main()
{
	except k;
	k.read();
	k.div();
	return 0;
}
