//Q.1 Write a Program to create an Employee Record System using the Class and object of any 5 employees. 
//Consider the below-mentioned attributes in the Employee class:
//- emp_id
//- emp_name
//- emp_age
//- emp_role
//- emp_salary
//- emp_city
//- emp_experience
//- emp_company_nam
#include<iostream>
using namespace std;
class emp
{
	int id,age,salary,exp;
	char role[20],city[30];
    string name,company_name;
    public:
    void input(int i)
    {
		
        cout<<"Employee Record "<<endl;
		cout<<"enter id:";
		cin>>id;
		cin.ignore();
		cout<<" enter name:";
		getline(cin,name);
		cout<<"enter age:";
		cin>>age;
		cout<<"enter salary:";
		cin>>salary;
		cout<<"enter experience:";
		cin>>exp;
		cout<<"enter role:";
		cin>>role;
		cout<<"enter city:";
		cin>>city;
		cin.ignore();
		cout<<"enter company name:";
//		cin>>company_name;
		getline(cin,company_name);
		cout<<endl<<' ';
		
		
		cout<<"id :"<<id<<endl;
		cout<<"name :"<<name<<endl;
		cout<<"age :"<<age<<endl;
		cout<<" salary :"<<salary<<endl;
		cout<<"experiance :"<<exp<<endl;
		cout<<"role :"<<role<<endl;
		cout<<"city :"<<city<<endl;
		cout<<"company_name :"<<endl;
	}
	
};
main()
{
	class emp s1;
   string name;
	int i;
	for(i=0; i<=5; i++)
	{
		class emp s1;
		s1.input(i);

	}
	
}