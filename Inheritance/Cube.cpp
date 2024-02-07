//Q.1 Write a Program to find the sum of all three number’s cubes by implementing single-level inheritance: Class X->Class Y
//- Class X has the following members: a, b & c attributes in integer data type
//- Class Y has the following members: setData() and getData() methods
#include<iostream>
using namespace std;
class X
{
	protected:
		int a,b,c,x;
		public:
};
class Y : public X
{
	 public:
		void setData()
		{
			cout<<"enter the value of a:";
			cin>>a;
			cout<<"enter the value of b:";
			cin>>b;
			cout<<"enter the value of c:";
			cin>>c;
			
		}
		void getData()
		{
		   cout<<"Sum is : "<<a+b+c<<endl;
		   x=a+b+c;
		   cout<<"Cube is : "<<x*x*x;
		}
};
main()
{
	Y y1;
	y1.setData();
	y1.getData();
}