//.2 Write a Program to add two distances using binary plus (+) operator overloading.
//
//For example,
//Input:
//input1 => Km: 3, Meter: 1020
//input2 => Km: 2, Meter: 2050
//
//Output:
//Km: 8, Meter: 70
#include<iostream>
using namespace std;
class Add
{
	int km,meter;
	int km1,meter1,km2,meter2, x=0;
	public:
	void set()
	{
	   cout<<"Enter km1 : ";
	   cin>>km1;
	   cout<<"Enter meter1 : ";
	   cin>>meter1;
	   cout<<"Enter km2 : ";
	   cin>>km2;
	   cout<<"Enter meter2 : ";
	   cin>>meter2;
    }

    void getter()
    {
	
	   int i;
	   km=km1+km2;
	   meter=meter1+meter2;
	   for(i=1; i<=meter; i++)
	   {
		   if(meter>1000)
		   {
			  meter-=1000;
			  x++;
		   }
		   
	   }
   }
    void get()
    {
    	cout<<"Km -  "<<km + x<<endl;
	    cout<<"meter -  "<< meter<<endl;
	}
	
};

int main()
{
	 Add a1;
	 a1.set();
	 a1.getter();
     a1.get();
	
}