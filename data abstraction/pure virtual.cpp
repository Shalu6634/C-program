#include<iostream>
using namespace std;
class Mcd
{
	public:
		int royalty=1000;
		int profit,income;
		virtual void business()= 0;
	
};
class Shakha : public Mcd
{
	public:
		void business()
		{
			cout<<"enter income:";
			cin>>income;
		}
		void netProfit()
		{
			profit=income-royalty;
			cout<<" "<<profit;
		}
};
main()
{
	Shakha s1;
	s1.business();
	s1.netProfit();
}