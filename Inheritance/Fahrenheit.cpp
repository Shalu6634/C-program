//Q.2 Write a Program to convert a given degree Celsius temperature into Fahrenheit and convert that Fahrenheit temperature into Kelvin by
// implementing multilevel inheritance: Class P -> Class Q -> Class R
//c to Fahrenheit = F = (Celsius*9/5)+32;
//- Class P has the following members: temperature attribute in float
//- Class Q has the following members: toFehrenheit() method
//- Class R has the following members: toKelvin() method.
// Fahrenheit to kelvin = K=(f-32)*5/9+273.15;
#include<iostream>
using namespace std;
class P
{
	protected:
		float f,Celsius,k;
	public:
};
class Q :public P
{
	public:
	void Fahrenheit()
	{
		cout<<"Enter value of celsius:";
		cin>>Celsius;
		
		f= (Celsius*9/5)+32;
		cout<<"Celsius to Fahrenheit :"<<f;
		cout<<endl;
	}
	
};
class R : public Q
{
	public :
	void Kelvin()
	{

		 k = (f-32) * 5/9+ 273.15;
		cout << "Fahrenheit to Kelvin: " << k;
	}
};
main()
{
	 
	R r1;
	r1.Fahrenheit();
	r1.Kelvin();

}