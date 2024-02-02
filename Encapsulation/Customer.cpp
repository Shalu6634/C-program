//Q.2 Write a Program to create a Customer Record System for 5 customers using Encapsulation. Consider the below-mentioned attributes in the Customer structure:
//- cust_id
//- cust_name
//- cust_age
//- cust_city
//- cust_mobile_number
//- cust_simcard_validity (in years)
//- cust_telecom_brand_name (like Jio, Airtel, Vi, etc.)
#include<iostream>
using namespace std;
class Customer
{
	int id,age,sim;
	long  number;
	string name,city,brand;
	
	public:
	void set(int i)
	{
		cout<<"enter id :";
		cin>>id;
		cin.ignore();
		cout<<"enter name :";
		getline(cin,name);
		
		cout<<"enter age :";
		cin>>age;
	
		cout<<"mobile num :"<<number;
		cin>>number;
	
		cout<<"enter simvalidity :";
		cin>>sim;
		
		cout<<"enter city name:";
		cin>>city;
		
		cin.ignore();
		cout<<"enter telecom brand name:";
		getline(cin,brand);
	
		
	}
	void get(int i)
	{
		cout<<"id :"<<id<<endl;
		cout<<"name :"<<name<<endl;
		cout<<"age :"<<age<<endl;
		cout<<"simvalidity :"<<sim<<endl;
		cout<<"mobile number :"<<number<<endl;
		cout<<"city :"<<city<<endl;	
		cout<<"telecom brand :"<<brand<<endl;		
	}
};
int main()
{
	Customer c1;
	int i;
	for(i=0; i<5; i++)
	{
		c1.set(i);
		c1.get(i);
	}
	return 0;
}
