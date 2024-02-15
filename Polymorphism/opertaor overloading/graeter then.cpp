//Q.1 Write a Program to overload < operator to find which object contains a higher value from given 2 numbers.
// ++,-
#include<iostream>
using namespace std;
class Math
{
	int a,b;
	public:
		void set()
		{
		  cout<<"enter a:";
		  cin>>a;
		  cout<<"enter b:";
		  cin>>b;
		}	
		bool operator>(Math &m2)
		{
	       if(this->a>this->b)
			{
				return 1;
			}
			else
			{
			   return 0;
			}
		}
	
};
main()
{
	Math m1,m2,m3;
	m1.set();
	
	if(m1>m2)
	{
		cout<<"m1 is greater";
	}
	else
	{
		cout<<"m2 is greater ";
	}
}
