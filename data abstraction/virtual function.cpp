#include<iostream>
using namespace std;
class A
{
	protected:
		int a=30;
};
class B : virtual public A
{
	protected:
		int b=20;
	
};
class C : virtual public B
{
	protected:
		int c=70;
	
};
class D : virtual public B,virtual public C
{
	public:
		void print()
		{
			cout<<" "<<a<<" "<<b<<" "<<c;
		}
};
main()
{
	D d1;
	d1.print();
	
}