//Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
//- a person cannot be able to vote if his/her age is less than 18
#include<iostream>
using namespace std;

main()
{
	int age;
	cout<<"Enter your age:";
	cin>>age;
	try
	{
		if(age<18||age<100)
		{
			throw age;
		}
		else 
		{
			cout<<endl<<"you can eligible for vote "<<" "<<age;
		}
	}
	catch(int x)
	{
		cout<<x <<" "<<"you cannot eligible for vote!";
	}
	
	
}