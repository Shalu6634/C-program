//Q.3 Write a Program to read and print Employee information with the use of Multilevel inheritance.
#include<iostream>
using namespace std;
class A
{
	protected:
		int id,salary,exp;
		long long contact;
		string email;
		string com_name,address;
		string name,role;
		public:
			void setter1()
			{
				cout<<"Enter employee id :";
				cin>> id;
		        cin.ignore();
				cout<<"Enter employee name :";
				getline(cin, name);
				
				cout<<"Enter employee role :";
				getline(cin,role);
			}
		
};
class B : public A
{
	
		public:
			void setter2()
			{
				cout<<"Enter employee salary :";
				cin>> salary;
				cout<<"Enter employee exp :";
				cin>> exp;
			}
	
};
class C : public B
{

		public:
			void setter3()
			{
				cin.ignore();
				cout<<"Enter company_name :";
				getline(cin,com_name);
				cin.ignore();
				cout<<"Enter address :";
				getline(cin,address);
			}
			
};
class D : public C
{
		public:
			void setter4()
			{
				cin.ignore();
				cout<<"employee email-id :";
				getline(cin, email);
				cout<<"employee contact :";
				cin>> contact;
				
			}
			
		   void getter1()
			{
				setter1();
				setter2();
				setter3();
				setter4();
				cout<<endl<<endl;
				cout<<"employee id :"<< id<<endl;
				cout<<"employee name :"<< name<<endl;
				cout<<"company_name :"<< com_name<<endl;
				cout<<"employee salary :"<< salary<<endl;
	            cout<<"employee role :"<< role<<endl;
				cout<<"employee experience :"<< exp<<endl;
				cout<<"employee contact :"<< contact<<endl;
	            cout<<"company address :"<< address<<endl;
	            cout<<"employee email-id :"<< email<<endl;
			}
};

main()
{
	D d1;
	d1.getter1();
	
	return 0;
}