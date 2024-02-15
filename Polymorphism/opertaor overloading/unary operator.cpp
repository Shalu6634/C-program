//Q.1 Write a Program to overload < operator to find which object contains a higher value from given 2 numbers.
// ++,-
#include<iostream>
using namespace std;
class Math
{
	int a;
	public:
      void set(int a)
       {
          this->a=a;
       }
	void get()
	{
	      cout<<" a : "<< a <<endl;
	}
	Math operator++(int)
	{
	  Math num;
	   num.a=a+1;;
	   return num;
	}
};
main()
{
	Math m1,m2;
	m1.set(3);
	m2=m1++;
	m2.get();
	
}
