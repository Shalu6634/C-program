//Q.1 Write a Program to make a Railway Reservation System.
//Requirements:
//(A) User Input: 
//- Train Number
//- Train Name
//- Source
//- Destination
//- Train Time
//(B) Display Records: 
//- All Records
//- By Searching Train Number
//(C) Minimum 3 Input Train Records
#include<iostream>
//#include<string>

using namespace std;

class Railway
{
	
		int train_num,train_time[30];;
		string train_name[40];
	    static string destination;
	    static string source;
	    public:
		
	   void setter()
	   {
		    for(int i=1; i<=3; i++)
	        {
		      cout << "enter the train number : ";
		      cin >> train_num;
			  cout << "enter the train time : ";
			  cin >> train_time[i];
			  cin.ignore();
			  cout << "enter the train name :";
			  getline(cin,train_name[i]);
			  cout<<endl;
		
			}
			
	    }
    	void getter()
		{
	    	int i;
			cout << "Enter and choose your train 1,2,3:"<<endl;
            cout<<endl;
			cout << "Enter your train_num :"<<endl;
			cin >> i;
			cout <<"train_number :"<< i << endl; 
			cout<<"Train_time :" << train_time[i] << endl;
		    cout <<"Train_name :" << train_name[i] << endl; 
		    cout<< "Source :" << source<< endl ;
			cout << "Destination :" << destination<< endl ; 
        }
			
};

string Railway :: source = "Surat Station";
string Railway :: destination = "Lucknow Station";

int main()
{
	Railway r1;

    r1.setter();
	r1.getter();
}
