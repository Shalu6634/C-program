//Q.1 Write a Program to get and display Hotels and static information using Encapsulation with
// an array of objects member by including the below-mentioned attributes:
//- hotel_id
//- hotel_name -static
//- hotel_type (like hotel or motel)
//- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
//- hotel_location (city name)
//- hotel_establish_year - static
//- hotel_staff_quantity
//- hotel_room_quantity
#include<iostream>
using namespace std;
class Hotel
{
	int id,rating,staff,room;
	string type,location;
	static int establish_year;
	static string name;
	public:
	void input()
	{
	  cout<<"Enter id :-";
	  cin>>id;
	  cin.ignore();
	  cout<<"Enter hotel type :-";
	  getline(cin,type);
	  
	  cout<<"Enter hotel rating :-";
	  cin>>rating;
	  
	  cin.ignore();
	  cout<<"Enter hotel location :-";
	  getline(cin,location);
	  
	  cout<<"Enter hotel staff :-";
	  cin>>staff;
	  
	  cout<<"Enter room of hotel :-";
	  cin>>room;
	  cout<<endl;
	}
	void output()
	{
		cout<<"hotel_name :"<<name<<endl;
		
		cout<<"hotel_establish_year :"<<establish_year<<endl;
		
		cout<<"hotel_id :"<<id<<endl;
		
		cout<<"hotel_type :"<<type<<endl;
		
		cout<<"hotel_rating :"<<rating<<endl;
		
		cout<<"hotel_location :"<<location<<endl;
		
		cout<<"hotel_staff_quantity :"<<staff<<endl;
		
		cout<<"hotel_room_quantity :"<<room<<endl;
		
	}
		
};
string Hotel::name="--JD Hotel--";
int Hotel::establish_year=2010;

main()
{
   Hotel h1[10];
   for(int i=0; i<5; i++)
   {
      h1[i].input();
   }
   for(int i=0; i<5; i++)
   {
      h1[i].output();
   }
   
}
