/*Q.2 Write a Program to make a Supermarket Billing System.
Requirements:
(A) User Input:
- Item Number
- Item Name
- Quantity
- Price
- Discount
(B) Verify User Id And Password
(C) Display Records:
- All Records
- By Searching Item Number*/
#include<iostream>
using namespace std;

class Market
{
	
		int item_num,quantity[30],price[500];
		int discount[100];
	    string item_name[50];
	    string user_id;
	    static string user;
	    static int pass;
	    int password;

	    public:
		
	   void setter()
	   {

    	    cout << "User_id : "<<endl;
    	    cin >> user_id;
    	    cout << "Password : "<<endl;
    	    cin >> password;
    	    cout<<"....Welcometo super market..."<<endl;
    	    if(user_id==user&&password==pass)
    	    {
			
		       for(int i=1; i<=3; i++)
	           {
		         cout << "enter the item_num : ";
		         cin >> item_num;
		         cin.ignore();
			     cout << "enter the item_name : ";
			     getline(cin,item_name[i]);
	
			     cout << "enter the quantity :";
			     cin>>quantity[i];
			     
			     cout<<"Enter the price :";
			     cin>>price[i];
			     cout<<"Enter the discount:";
			     cin>>discount[i];
			   
			     cout<<endl;
                }
	    	} 
	    }
    	void getter()
		{
	    	int i;

            cout<<endl;
			cout << "Enter your item_num :"<<endl;
			cin >> i;
			cout <<"item_number :"<< i << endl; 
			cout<<"item_name :" << item_name[i] << endl;
		    cout <<"Quntity :" <<quantity[i] << endl; 
		    cout<< "price :" << price[i]<< endl ;
		    cout<<"Discount :"<<discount[i]<<endl;
        }
			
};
string Market :: user = "dmart_market";
int Market :: pass = 123456789;
int main()
{
	Market m1;

    m1.setter();
	m1.getter();
}
