//Q.2 Write a Program to create a Customer Record System for 5 customers using Encapsulation.
// Consider the below-mentioned attributes in the Customer structure:
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
	int id,age;
	string name;
	double num;
	char city[20],sim[20],brand[20];
	
	public:
	void set(int i)
	{
		cout<<" enter customer id :";
		cin>>id;
		cin.ignore();
		cout<<"enter customer name :";
		cin>>name;
		getline(cin,name);
		
		cout<<"enter customer age :";
		cin>>age;
		
		cout<<"enter mobile number:";
		cin>>num;
		
		cout<<"enter city name:";
		cin>>city;
		
		cout<<"enter simvalidity:";
		cin>>sim;
		
		cout<<"enter telecom brand name:";
		cin>>brand;
		
	}
	void get(int i)
	{
		
		cout<<"id :"<<id<<endl;
		cout<<"name :"<<name<<endl;
		cout<<"age :"<<age<<endl;
		cout<<"mobile_number :"<<mobile_num<<endl;
		cout<<"city_name:"<<city<<endl;
		cout<<"sim_validity:"<<sim<<endl;
		cout<<"telecom_brand :"<<brand<<endl;	
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
}