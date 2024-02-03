//Q.1 Write a Program to get and display N numbers of Diamond companies information using 
//encapsulation and use of Parameterised Constructor by including below
//- comp_id
//- comp_name
//- comp_staff_quantity
//- comp_revenue (per year)
//- comp_import_raw_diamonds (no. of raw diamonds
//imported per year)
//- comp_export_diamonds (no. of diamonds per year)
//- comp_ceo (name of CEO of the company)
#include<iostream>
using namespace std;
class Company
{
	int id,staff,rev,import,expo,n;
	string company,ceo_name;
	public:
		
      Company(int id,int stsff,int rev,int import,int expo,string company,string ceo_name)
	  {
	     this->id=id;
		 this->staff=staff;
		 this->rev=rev;
	     this->import=import;
		 this->expo=expo;
		 this->company=company;
		 this->ceo_name=ceo_name;
			
		cout<<endl;
		cin.ignore();
		cout<<"Enter comp_name:";
		getline(cin,company);
		
		cout<<"Enter comp_id :";
		cin>>id;
		
		cin.ignore();
		cout<<"Enter ceo_name:";
		getline(cin,ceo_name);
		
		cout<<"Enter comp_staff_quantity :";
		cin>>staff;
		
	    cout<<"Enter comp_revenue :";
		cin>>rev;
		
		cout<<"Enter comp_import_raw_diamonds  :";
		cin>>import;
		
		cout<<"Enter comp_export_diamonds:";
		cin>>expo;
		
		cout<<endl;

    
   	    cout<<"comp_name :"<<company<<endl;
		cout<<"comp_id :"<<id<<endl;
		cout<<"comp_ceo_name :"<<ceo_name<<endl;
		cout<<"comp_staff_quantity :"<<staff<<endl;
		cout<<"comp_reveune :"<<rev<<endl;
		cout<<"comp_import_raw_diamonds :"<<import<<endl;
		cout<<"comp_export_diamonds :"<<expo<<endl;
	}
	
};
int main()
{
    int n;
    cout<<"Enter number of company :";
    cin>>n;
	int id,staff,import,rev,expo;
	string company,ceo_name;
	int i;
	for(i=0; i<n; i++)
	{
	
    	Company c1(id,staff,import,rev,expo,company,ceo_name);
    }
}
		

