#include<iostream>
using namespace std;

class Bankaccount
{			
    protected:
		int account_num1=12345678,account_num2;
		int balance=10000;
		string  owner_name="shalu sharma";
	  public :	
		void set()
		{
			
				cout<<"Enter account_num2 :";
				cin>>account_num2;
				
				if(account_num1==account_num2)
				{
					
				    cout<<"press 1 credit "<<endl;
				    cout<<"press 2 debit "<<endl;
				    cout<<"press 3 exit "<<endl;
				    int n;
				    cout<<"Enter n:";
				    cin>>n;
				    
				    if(n==1)
				    {
				    	credit();
					}
					else if(n==2)
					{
					    debit();	
					}
				   
				}
				else
				{
					cout<<"account_num is wrong !";
				}	
	    }
	   
	        void credit()
	        {
				int add_balance;
				cout<<"Enter balance :";
				cin>>add_balance;
				balance=add_balance+balance;
				cout<<"Credit balnce :"<<balance<<endl;
	        }
	         void debit()
         	{
				int deb_balance;
				cout<<"Enter balance :";
				cin>>deb_balance;
				balance=balance-deb_balance;
				cout<<"debit balnce :"<<balance<<endl;
	        }
	        void display()
	        {
	        	cout<<"Total balance :"<<balance<<endl;
			}
		
};
main()
{
	Bankaccount b1;
	b1.set();
	
	return 0;
	
}