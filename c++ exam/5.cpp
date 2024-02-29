#include<iostream>
using namespace std;
class Bankaccount
{
	int balance;
	public:
		void set()
		{
			cout<<"Enter balance1:";
			cin>>balance;
		}
		void get()
		{
			cout<<"Total amount is :"<<balance<<endl;
		}
	   Bankaccount operator+(Bankaccount  &b2)
	   {
	  	  Bankaccount a1;
		    int x=this->balance+b2.balance;
		    int y=this->balance+b2.balance;
		    
		    a1.balance=x;
		    a1.balance=y;
		    return a1;
	  }
};
int main()
{
	Bankaccount b1,b2,b3;
	b1.set();
	b2.set();
	b3=b1+b2;
	b3.get();
	return 0;
}