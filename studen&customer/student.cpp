//Q.1 Write a Program to create Student Record System for 5 students using Encapsulation. Consider the below-mentioned attributes in the Student class:
//- stu_id
//- stu_name
//- stu_age
//- stu_course
//- stu_city
//- stu_email
//- stu_college
#include<iostream>
using namespace std;
class Student
{
	int id,age;
	string name,collage,course;
	char city[20],email[30];
	public:
	void set(int i)
	{
		cout<<"enter id :";
		cin>>id;
		cin.ignore();
		cout<<"enter name :";
		cin>>name;
		getline(cin,name);
		
		cout<<"enter age :";
		cin>>age;
		
		cin.ignore();
		cout<<"enter course name:";
		cin>>course;
		getline(cin,course);
		
		cin.ignore();
		cout<<"enter collage name:";
		cin>>collage;
		getline(cin,collage);
		
		cout<<"enter email-id:";
		cin>>email;
		
		cout<<"enter city name:";
		cin>>city;
		
	}
	void get(int i)
	{
		cout<<"id :"<<id<<endl;
		cout<<"name :"<<name<<endl;
		cout<<"age :"<<age<<endl;
		cout<<"course :"<<course<<endl;
		cout<<"email-id:"<<email<<endl;
		cout<<"collage :"<<collage<<endl;
		cout<<"city :"<<city<<endl;		
	}
};
int main()
{
	Student s1;
	int i;
	for(i=0; i<5; i++)
	{
		s1.set(i);
	    s1.get(i);
	}
	return 0;
}