#include<iostream>
using namespace std;
class Shape
{
	
	public:
	virtual void calculateArea()=0;
	virtual void draw()=0;
};

class Circle : public Shape
{
	int r,area;
	const float pi=3.14;
	public:
	void calculateArea()
	{
		cout<<"Enter radius :";
		cin>>r;
		area = pi*r*r;
		cout<<"Area :"<<" "<<area<<endl;
		
	}
	void draw()
	{
		cout<<"Drawing"<<endl;
	}
	
};

class Rectangle : public Shape
{
	int length,width,area;
	public:
			
		void calculateArea()
		{
			cout<<"Enter width :";
		    cin>>width;
		    cout<<"Enter length :";
		    cin>>length;
		    area=length*width;
		    cout<<"Area :"<<area<<endl;
	
		}
		void draw()
		{
		   cout<<"Drawing"<<endl;
		}
	
};

int main()
{
	Circle c1[2];
	c1[0].calculateArea();
	c1[1].draw();
	
	Rectangle r1[2];
	
	r1[0].calculateArea();
	r1[1].draw();
	return 0;
}