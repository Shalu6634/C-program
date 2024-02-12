//Write a Program to solve ambiguity errors.

#include<iostream>
using namespace std;

class A
{
	protected:
		int a=20;
	
};
class B
{
	protected:
		int a=10;
};
class C : public A,public B
{
	public:
		void get()
		{
			cout<<B::a;
		}
};
int main()
{
	C c1;
	c1.get();
}
