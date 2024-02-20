#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int width,length;
		public:
		    Rectangle()
		    {
		    	cout<<"Enter width :";
		    	cin>>width;
		    	cout<<"Enter length :";
		    	cin>>length;   
		    }
			int area()
			{
				cout<<endl;
				cout<<"area of rectangle"<<":"<<width*length;
//				return width*length;
                cout<<endl;
			}
			int get()
			{
			   cout<<"width :"<<width<<endl<<"height :"<<length;
		    }
		
	
};
main()
{
	Rectangle r1;
	r1.get();
	r1.area();
}
