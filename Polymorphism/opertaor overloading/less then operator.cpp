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
			cout<<"Enter a:";
			cin>>a;
			cout<<"Enter b:";
			cin>>b;
			
		}
		int get()
		{
			if(a<b)//a=a2,b=a1
			{
			  cout<<"a1 is higher value";	
			}
			else
			{
				cout<<"a2 is higher value";
			}	
		}
		Math operator<(Math &m2)
		{
			 Math temp;
   	         temp.b=this->a;
   	         temp.a=m2.a;
   	         return temp;
		}
};
main()
{
	Math m1,m2,m3;
	m1.set();
	m2.set();
	m3=m1<m2;
	m2.get();
	
}