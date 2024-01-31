//Q.2 Write a Program to find leap years between two given numbers and store them in an array. And then print that array.
//For example,
//Input:
//Enter the first number: 2020
//
//Enter the second number: 2040
//
//Output:
//The array is: 2020, 2024, 2028, 2032, 2036, 2040
#include<iostream>
using namespace std;
main()
{
	int x,y;
	cout<<"Enter the first number x:";
	cin>>x;
	cout<<"Enter the second number y:";
	cin>>y;
	cout<<"leap year :";
	int i=0,j=0;
	int n=(y-x)/4+1;
	int a[n];
	for(i=x; i<=y; i++)
	{
	   if(i%4==0)
	   {
	   	 a[j]=i;
	   	 j++;
	   }
	}
	for(i=0; i<j; i++)
	{
		cout<<a[i];
		cout<<" ";
	}
}
