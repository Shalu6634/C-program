//Q.2 Write a Program to create a Car Record System using the Class and object of any 4 Cars. Consider the below-mentioned attributes in the Car class:
//- car_id
//- car_company_name
//- car_color
//- car_model
//- car_release_year
#include<iostream>
using namespace std;
class car
{
	int id,year;
	char companyname[20],color[20],model[30];
    public:
    void input(int i)
    {
		
        cout<<"Car Record System:-"<<endl;
		cout<<"enter id:";
		cin>>id;
		
		cout<<"enter car companyname:";
		cin>>companyname;
		cout<<"enter releaseyear:";
		cin>>year;
		cout<<"enter color:";
		cin>>color;
		cout<<"enter model:";
		cin>>model;

		cout<<endl<<' ';
		

		cout<<"enter id :"<<id<<endl;
		cout<<"Car company_name :"<<companyname<<endl;
		cout<<"Release year is :"<<year<<endl;
		cout<<" color name is:"<<color<<endl;
		cout<<"model name is :"<<model<<endl;

	}
	
};
main()
{
	class car s1;
  
	int i;
	for(i=0; i<5; i++)
	{
		class car s1;
		s1.input(i);

	}
	
}