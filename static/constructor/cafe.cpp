//Q.2 Write a Program to get and display N numbers of Fast Food cafe information using encapsulation
// and the use of a Default constructor by including the below-mentioned attributes:
//- cafe_id
//- cafe_name
//- cafe_type (like a rooftop or normal)
//- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
//- cafe_location (city name)
//- cafe_establish_year
//- cafe_staff_quantity
#include<iostream>
using namespace std;
class Cafe
{
	int id,rating,establish_year,staff;
	string name,cafe_type,location ;
	
	public:
	Cafe()
	{
	
		cout<<"Enter cafe_id :";
		cin>>id;
		
		cin.ignore();
		cout<<"Enter cafe_name:";
		getline(cin,name);
		
		cin.ignore();
		cout<<"Enter cafe_type:";
		getline(cin,cafe_type);
		
		cout<<"Enter cafe_rating :";
		cin>>rating;
		
		cin.ignore();
	    cout<<"Enter cafe_location :";
		getline(cin,location);
		
		cout<<"Enter cafe_establish_year :";
		cin>>establish_year;
		
		cout<<"Enter cafe_staff_quantity:";
		cin>>staff;
		
		cout<<endl;
		
		cout<<"cafe_name :"<<id<<endl;
		cout<<"cafe_id :"<<name<<endl;
		cout<<"cafe_type :"<<cafe_type<<endl;
		cout<<"cafe_rating :"<<rating<<endl;
		cout<<"cafe_location :"<<location<<endl;
		cout<<"cafe_establish_year :"<<establish_year<<endl;
		cout<<"cafe_staff_quantity :"<<staff<<endl;
	}

	
	
};
int main()
{
	int n;
	cout<<"Enter number of cafe :";
	cin>>n;
	int i;
	for(i=0; i<n; i++)
	{
		Cafe c1;
	}

}