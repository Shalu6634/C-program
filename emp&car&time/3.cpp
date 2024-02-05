#include<iostream>
using namespace std;

class Time
{
	public:
	int min,hour,second;
	void time( )
	{
	   cout<<"enter second:";
	   cin>>second;
	   hour = second / 3600;
	   second=second-(hour*3600)
	   min = second / 60;
	   second = second -(min*60);
	  
           cout<<"hh:mm:ss"<<' '<<hour <<':'<<min<< ':'<<second;
	
        }
};
int main()
{
	Time s;
	s.time();
}
