//Q.3 Write a Program to read and print Employee information with the use of Multilevel inheritance.
#include<iostream>
using namespace std;
class A
{
	protected:
		int id;
		string name,role;
		public:
			void setter()
			{
				cout<<"Enter employee id :";
				cin>> id;
				cout<<"Enter employee name :";
				cin>> name;
				cout<<"Enter employee role :";
				cin>> role;
			}
		
};
class B
{
	protected:
	int salary,exp;
		public:
			void setter()
			{
				cout<<"Enter employee id :";
				cin>> salary;
				cout<<"Enter employee name :";
				cin>> exp;
			}
			void getter()
			{
				cout<<"employee salary :"<< salary;
				cout<<"employee experiance :"<< exp;
			}
	
};
class C
{
	
};
class D
{
	
};

main()
{
	
	
	
	return 0;
}