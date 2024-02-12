//Q.1 Write a Program that defines a shape class with a constructor that gives value to width and height. 
//Then define two sub-classes triangle and rectangle, that calculate the area of the shape area (). 
//In the main, define two objects a triangle and a rectangle, and then call the area() function using these two objects.
#include<iostream>
using namespace std;
class Shape
{
	protected:
		int width,height;
		public:
		Shape()
		{
			cout<<"Enter width :";
			cin>>width;
			cout<<"Enter height :";
			cin>>height;
		}
	
};
class Rectangle :  public Shape
{
	public:
		void area()
		{
		   cout<<"Rectangle :"<<width*height<<endl;	
		}
	
};
class Triangle : public Rectangle
{
	public:
		void area()
		{
			cout<<"triangle :"<<(width*height)* 1/2<<endl;	
		}
};
main()
{
	
	Triangle t1;
	t1.area();
	Rectangle r1;
	r1.area();
	return 0;
	
}