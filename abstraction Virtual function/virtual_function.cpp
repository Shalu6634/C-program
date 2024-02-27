#include<iostream>
using namespace std;
class A
{
	public:
		virtual void set()
		{
			cout<<"Class A";
		}
};
class B : public A
{
	public:
		void set()
		{
			cout<<"Class B";
		}
};

main()
{
	A a1;
	
	B b1;
	A *ptr=&b1;
	ptr->set();
}