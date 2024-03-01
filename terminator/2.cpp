#include<iostream>
using namespace std;

class Math
{
	public:
	int a,b;
	void set()
	{
		cout<<"Enter a :";
	    cin>>a;
	    cout<<"Enter b :";
	    cin>>b;
	}
	void get()
	{
		try
	    {   
	      if(b==0)
	      {
		    throw b;
	      }
	      else
	      {
	        cout<<" "<<"Division :"<<a/b;
		  }
	    }
	    catch(...)
	    {
		   cout<<"Value not divide by 0 !";
	    } 
	}
	
};
int main()
{
	
	Math a1;
	a1.set();
	a1.get();
	
	return 0;
}