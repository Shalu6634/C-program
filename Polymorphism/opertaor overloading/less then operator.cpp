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
		int  get()
		{
			if(a>b)
			{
				cout<<"a is max"<<endl;
			}
			else
			{
			   cout<<"b is max"<<endl;
			}
		}
		Math operator>(Math &m)
		{
	       Math temp;
	       temp.a=a;
	       temp.b=b;
		   return temp;
	       
		}
};
main()
{
	Math m1,m2,m3;
	m1.set();
	m2.set();
	m3=m1>m2;
	m2.get();
}
