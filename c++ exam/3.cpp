#include<iostream>
using namespace std;

class Vehicle
{
	
	int speed,model;
	public:
		void set()
		{
			cout<<"Enter model :";
			cin>>model;
		}
		void get()
		{
			cout<<"Model:"<<model<<endl;
			
		}
	virtual void calculation()=0;
};
class Car :public Vehicle
{
	int distance,time,speed;
	public:
		void calculation()
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
	    void calculation()
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
	Car c1;
	c1.calculation();
	c1.set();
	c1.get();
	Bike b1;
	b1.calculation();
	b1.set();
	b1.get();
	
}