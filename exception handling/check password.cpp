#include<iostream>
using namespace std;

main()
{
	char password[32],x=0,i;
	cout<<"Enter your password:";
	cin>>password;
	int length=strlen(password);
	for(i=0; i<length; i++)
	{
		if(password[i]>=65&&password[i]<=90)
		{
			x=1;
		}
	}
	try
	{
		if(x==0)
		{
			throw password;
		}
		else
		{
			cout<<"your password is valid !";
		}
		
	}
	catch(...)
	{
		cout<<"your password is not valid !";
	}
}