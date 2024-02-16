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
	int km1,meter1,km,meter;
	
	public :
		void set()
		{
			cout << "Enter km :";
			cin >> km;
			cout << "Enter meter:";
			cin >> meter;
		}
		void get()
		{
			cout << "km :" << km <<" "<< "meter :" << meter << endl;
		}
		
		Add operator+(Add & a2)
		{
                     Add d;
                     int x;
		    km1= this->km + a2.km;
		    meter1= this->meter + a2.meter;
						
			for(int i=1; i<=meter1; i++)
			{
				if(meter1>1000)
				{
					x++;
					meter1 = meter1 - 1000;	
				}	
			}
			
			      d.km = km1 + x;
			       d.meter = meter1;
			
			       return d;
		}
};
int main()
{
	Add a1,a2,a3;
	
	a1.set();
	a2.set();
	
	a3 = a1 + a2;
	a3.get();
	return 0;
}
