//Q.1 Write a Program to abstract some attributes of class Admin to prevent them to be inherited by its child classes.
//- Class Admin -> Class Manager
//- Class Manager -> Class Employee
//- Class Admin has the following members:
//company_name
//manager_salary
//employee_salary
//total_staff
//total_annual_revenue
//can_terminate
//- use all attributes accessibility in the parent class and child class properly.
//- override a method myAccess() in both child classes to display all parent class members' values accordingly.
#include<iostream>
using namespace std;
class Admin
{
	protected:
    int manager_salary=70000,employee_salary=30000,annual=3;
    string terminate="yes/no";
    public:
    int staff=100;
	string company_name="Information technology";
	void myAccess()
	{
	  cout<<"Admin ...myAccess....."<<endl;
	  cout<<"Company name:"<<company_name<<endl;
	  cout<<"Total staff:"<<staff<<endl;
	  cout<<"Total_annual_revenue:"<<annual<<endl;
	  cout<<"Manager salary:"<<manager_salary<<endl;
	  cout<<"Employee_salary:"<<employee_salary<<endl;
	  cout<<"Can_terminate:"<<terminate<<endl;
	}
	
};
class Manager :  public Admin
{
	public:
    void myAccess()
	{
		cout<<endl<<endl;
		cout<<"Manager .....myAccess....."<<endl;
		cout<<"Company name:"<<company_name<<endl;
		cout<<"Total staff:"<<staff<<endl;
		cout<<"Total_annual_revenue:"<<annual<<endl;
		cout<<"Manager salary:"<<manager_salary<<endl;
		cout<<"Employee_salary:"<<employee_salary<<endl;
	}
	
};
class Employee  : public Manager
{
	public:
    void myAccess()
	{
		cout<<endl<<endl;
		cout<<"Employee ....myAccess....."<<endl;
		cout<<"Company name:"<<company_name<<endl;
		cout<<"Total staff:"<<staff<<endl;
		cout<<"Employee_salary:"<<employee_salary<<endl;
	}
	
	
};
main()
{
	Admin a1;
	a1.myAccess();
	Manager m1;
	m1.myAccess();
	Employee e1;
	e1.myAccess();

}