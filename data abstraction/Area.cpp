//Q.1 Write a Program to perform some basic mathematical operations using an Abstract class such as:
//- the area of a circle
//- the area of a triangle
//- the area of a rectangle
//- use one single pure virtual function named calculate() to perform all the above operations
#include<iostream>
using namespace std;

class Shape
{
	public:
		int area;
		virtual void calculate()=0;
	
};
class Circle : public Shape
{
	public:
		int radius;
		const float pi=3.14;
	void calculate()
	{
		cout<<"Enter radius:";
		cin>>radius;
	    area=pi*radius*radius;
		cout<<"area of circle"<<" "<<area;
	}
};
class Triangle : public Shape
{
	public:
		int width,length;
		void calculate()
		{
			cout<<endl;
		   cout<<"Enter width:";
		   cin>>width;
		   cout<<"Enter length:";
		   cin>>length;
		   
		   area=(width*length)/2;
		   cout<<"area of triangle:"<<" "<<area;
		   
		}
		
};

class Rectangle : public Shape
{
	public:
		int width,length;
		void calculate()
		{
			cout<<endl;
		   cout<<"Enter width:";
		   cin>>width;
		   cout<<"Enter length:";
		   cin>>length;
		   
		   area=width*length;
		   cout<<"area of rectangle:"<<" "<<area;
		}
	
};
int main()
{
	Circle c1;
	c1.calculate();
	Triangle t1;
	t1.calculate();
	Rectangle r1;
	r1.calculate();
	
}