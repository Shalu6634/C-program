//Q.1 Write a Program to perform all basic arithmetic. operations such as +, -, *, and / operations
// by implementing method overloading using 2 classes.
//- use only one method named calculate() in the child class
//- if you pass 2 arguments, perform division
//- if you pass 3 arguments, perform subtraction
//- if you pass 4 arguments, perform multiplication
//- if you pass 5 arguments, perform addition
#include<iostream>
using namespace std;
class A
{
	   protected:
		int a,b,c,d,e;
		public:
		void calculate(int a,int b)
		{
			this->a=a;
			this->b=b;
			cout<<"Division :"<<this->a / this->b<<endl;
		}
		void calculate(int a,int b,int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			cout<<"Subtraction:"<<this->a - this->b - this->c<<endl;
		}

};
class B : public A
{
	public:
	void calculate(int a,int b,int c,int d)
	{
		this->a=a;
		this->b=b;
		this->c=c;
		this->d=d;
		cout<<"Multiplication :"<<this->a * this->b * this->c * this->d<<endl;
	}
	void calculate(int a,int b,int c,int d,int e)
	{
		this->a=a;
		this->b=b;
		this->c=c;
		this->d=d;
		this->e=e;
		cout<<"division :"<<this->a + this->b + this->c + this->d + this->e<<endl;
	}
};
main()
{

	int a,b,c,d,e;
	cout<<"Enter value of a:";
	cin>>a;
	cout<<"Enter value of b:";
	cin>>b;
	cout<<"Enter value of c:";
	cin>>c;
	cout<<"Enter value of d:";
	cin>>d;
	cout<<"Enter value of e:";
	cin>>e;
	A a1;
    a1.calculate(a,b);
    a1.calculate(a,b,c);
	B b1;
	b1.calculate(a,b,c,d);
	b1.calculate(a,b,c,d,e);
	return 0;
	
}