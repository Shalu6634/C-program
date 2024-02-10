#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"Enter a,b,c:";
	cin>>a>>b>>c;
	if(a==b&&b==c&&c==a)
	{
		cout<<"this digit are same";
	}
	else if(a!=b&&b!=c&&c!=a)
	{
		//a,b,c
		if(a<b)
		{
			if(a<c)
			{
				cout<<"a is min";
			}
			else
			{
			  cout<<"c is min";	
			}
			
		}
		else
		{
			if(b<c)
			{
				cout<<"b is min";
			}
			else
			{
				cout<<"c is min";
			}
			
		}
	}
	else
	{
		cout<<"two digits are same";
	}
}