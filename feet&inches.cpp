//Q.3 Write a program to read and print distance for feet and inches.
//For example,
//input : 
//Enter feet: 6
//Enter inches: 40
//
//output: Feet - 9, Inch - 4
#include<iostream>
using namespace std;
main()
{
	int feet,inche;
	cout<<"Enter feet : ";
	cin>>feet;
	cout<<"Enter inches : ";
	cin>>inche;
	int i,x=0;
	for(i=1; i<=inche; i++)
	{
		if(inche>12)
		{
			inche-=12;
			x++;
		}
	}
	cout<<"feet -  "<<feet + x;
	cout<<"inches -  "<< inche;
}