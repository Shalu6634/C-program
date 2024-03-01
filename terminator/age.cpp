#include<iostream>
using namespace std;
//Write a Program to throw 0 if the age of the user is less than 18, otherwise print that you are eligible to vote.
//Also, handle that thrown exception and print you are not eligible to vote.
class Age
{
	public:
	int age;
	void set()
	{
		cout<<"Enter a :";
	    cin>>age;
	}
	void get()
	{
		try
	    {   
	      if(age<18 || age>90)
	      {
		   cout<<"you cant vote : "<<age;
	      }
	      else
	      {
	        throw 0;
	      }
	    }
	    catch(int x)
	    {
		   cout<<x<<" "<<"you can vote !";
	    } 
	}
	
};
int main()
{
	
	Age a1;
	a1.set();
	a1.get();
	
	return 0;
}
