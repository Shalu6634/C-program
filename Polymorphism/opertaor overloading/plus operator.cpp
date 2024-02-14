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
		void get()
		{
			cout<<" a :"<<a<<endl;
			cout<<" b :"<<b<<endl;
		}
		Math operator+(Math &m2)
		{
			Math temp;
			int x= this->a+m2.a;
			int y= this->b+m2.b;
			temp.a=x;
			temp.b=y;
			return temp;
		}
};
main()
{
	Math m1,m2,m3;
	m1.set();
	m2.set();
	m3=m1+m2;
	m3.get();
	
}