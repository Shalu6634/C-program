//Demonstrate Pure_virtual_function

#include<iostream>
using namespace std;

class Mcd
{
	protected :
	int income,profit,royalty = 500;
		
		virtual void business() = 0;	
};

class Shakha : public Mcd
{
	public :
		void business()
		{
			cout << "Enter Income : ";
			cin >> income;
		}
		void netProfit()
		{
			profit = income - royalty;
			cout << "Total Profit : " << profit;
		}
};


int main()
{
	Shakha s1;
	s1.business();
	s1.netProfit();

	return 0;
}
