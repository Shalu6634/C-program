//Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
//- a number cannot be divided by zero

#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter value of a:";
	cin>>a;
	cout<<"Enter value of b:";
	cin>>b;
	try
	{
		if(b==0)
		{
			throw b;
		}
		else
		{
		   cout<<"division :"<<a/b<<endl;	
		}
	}
	catch(...)
	{
		cout<<"value cant divide by 0 !";
	}
	
}