//For example,
//Input:
//Enter seconds: 4520
//
//Output:
//1:15:20
#include<iostream>
using namespace std;
class Time
{
	public:
	int min,hour,second;
	void set( )
	{
	   cout<<"enter second:";
	   cin>>second;
	   hour = second / 3600;
	   second=second-(hour*3600);
	   min = second / 60;
	   second = second-(min*60);

   }
   void get()
   {
     cout<<"hh:mm:ss"<<' '<<hour <<':'<<min<< ':'<<second;
   }
};
int main()
{
	Time s;
	s.set();
	s.get();
}
