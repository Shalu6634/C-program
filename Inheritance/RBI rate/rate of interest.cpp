//Q.1 Write a Program to print the rate of interest of different banks using hierarchical inheritance:
//- Class RBI -> Class SBI
//- Class RBI -> Class BOB
//- Class RBI -> Class ICICI
//- inherit rate attribute and getROI() method in all child
//classes
#include<iostream>
using namespace std;
class RBI
{
	public :
	int rate;
	
	void getROI()
	{
	    cout << "Enter rate of interest for RBI: ";
        cin >> rate;
        cout << "Enter rate of interest for SBI: ";
        cin >> rate;
        cout << "Enter rate of interest for BOB: ";
        cin >> rate;
        cout << "Enter rate of interest for ICICI: ";
        cin >> rate;
	}
	void get()
	{
	
		cout << "Rate of interest of RBI: " << rate << endl;
	}
	
};
class SBI : public RBI
{
	public :
	int rate;
	
	void getROI()
	{
		cout << "Rate of interest of SBI: " << rate<< endl;
	}
};
class BOB : public RBI
{
	public :
	int rate;
	
	void getROI()
	{
		cout << "Rate of interest of BOB: " << rate<< endl;
	}
};
class ICICI : public RBI
{
	public :
	int rate;
	
	void getROI()
	{
		cout << "Rate of interest of ICICI: " << rate<< endl;
	}
};
main()
{
	RBI r1;
	SBI s1;
    BOB b1;
    ICICI c1;

    
    r1.getROI();
    r1.get();
    s1.getROI();
    b1.getROI();
    c1.getROI();
    
}