//Q.1 Write a Program to create a class to read and add two distances.
//For example,
//Input:
//input1 => feet: 8, inch: 16
//input2 => feet: 4, inch: 14
//
//Output:
//14 feet 6 inch
#include<iostream>
using namespace std;
class Add
{  
   public:
   int feet,inch,f1,f2,inch1,inch2;
   void input1()
   {
   	  cout<<"Enter feet f1:";
   	  cin>>f1;
   	  cout<<"Enter feet f2:";
   	  cin>>f2;
   	  cout<<"Enter inch1:";
   	  cin>>inch1;
   	  cout<<"Enter inch2:";
   	  cin>>inch2;   	
   }
   void output()
   {
   	    feet=f1+f2;
   	    inch=inch1+inch2;
   	    if(inch>12)
   	    {
   	 	 int x=inch/12;
   	     feet+=x;
   	 	 inch%=12;
   	 	 cout<<"feet -"<< feet;
	     cout<<"inch -"<< inch;
	   }
   }
};
main()
{
	Add a1;
	a1.input1();
	a1.output();
}