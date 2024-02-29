#include<iostream>
using namespace std;
class Math
{
	int a,b;
	public:
	void set()
	{
		cout<<"Enter value of a:";
		cin>>a;
		cout<<"Enter value of b:";
		cin>>b;
	}
	void get()
	{
		try
		{
			if(b==0)
			{
				throw b;
			}
			else
			{
				cout<<"Division :"<<a/b;
			}
			
		}
		catch(int x)
		{
			cout<<x<<" "<<"value not divide by 0 !";
		}
	}
};
int main()
{
	Math m1;
	m1.set();
	m1.get();
	
}