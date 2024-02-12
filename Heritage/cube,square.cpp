//Q.2 Write a Program to demonstrate an example of hierarchical inheritance to get the square and cube of a number.
#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
		void set()
		{
			cout<<"Enter value of a:";
			cin>>a;
		}
		
};
class B : public A
{
	public:
		void square()
		{
			set();
			cout<<"square :"<<a*a << endl;
		}
};
class C : public A
{
	public:
		void cube()
		{
			set();
			cout<<"cube :"<<a*a*a << endl;
		}
};
main()
{
	
	B b1;
	b1.square();
	C c1;
	c1.cube();
  return 0;	
}