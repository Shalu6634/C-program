#include<iostream>
using namespace std;

class Vehicle
{
	
	int speed,model;
	public:
		  virtual void displayDetails()
			{
				cout<<"enter model :";
				cin>>model;
			}
		
};
class Car :public Vehicle
{
	int distance,time,speed;
	public:
		void displayDetails()
		{
			cout<<"Enter speed :";
			cin>>speed;
			cout<<"Enter distance :";
			cin>>distance;
			
			time=distance/speed;
			cout<<"time  :"<<time<<endl;
			cout<<"speed  :"<<speed<<endl;
		}
};
class Bike :public Vehicle
{
	int distance,time,speed;
	public:
	    void displayDetails()
		{
			cout<<"Enter speed :";
			cin>>speed;
			cout<<"Enter distance :";
			cin>>distance;
			
			time=distance/speed;
			cout<<"time  :"<<time<<endl;
				cout<<"speed  :"<<speed<<endl;
		}
};
int main()
{
	Vehicle *v1[2];
	Car c1;
	Bike b1;
	v1[0]=&c1;
	v1[1]=&b1;
	Vehicle v; 
	for(int i=0; i<2; i++)
	{
		v1[i]->displayDetails();
	}
}