//Q.1 Write a Program to print the rate of interest of different banks using hierarchical inheritance:
//- Class RBI -(A> Class SBI(B
//- Class RBI(A -> Class BOB(C
//- Class RBI (A-> Class ICICI(D
//- inherit rate attribute and getROI() method in all child classes
//S.I=p*r*t/100
#include<iostream>
using namespace std;
class RBI 
{

	protected:
	 int p=1000,t=1;
	 int r,SI;
	 public:
//	  void set()
//	  {
//	 	cout<<"Enter your amount :"	;
//	 	cin>>p;
//	 	cout<<"Enter year :";
//	 	cin>>t;
//	  }
//	 	void getROI()
//		{
//			SI = (p *5* t)/100;
//			cout<<"Enter rate for RBI interest :"<<SI<<endl;
//		}
	
};

class SBI : public RBI
{
	public:
		void getROI()
		{
			SI = (p *5* t)/100;
			cout<<" rate for SBI interest :"<<SI<<endl;
		}
};

class BOB : public RBI
{
	public:
		void getROI()
		{
			SI = (p *5* t)/100;
			cout<<" rate for BOB interest :"<<SI<<endl;
		}
};

class ICICI : public RBI
{
	public:
		void getROI()
		{
			SI = (p *5* t)/100;
			cout<<" rate for ICICI interest :"<<SI<<endl;
		}
};
main()
{
	RBI r1;
//	r1.set();
//	r1.getROI();
	SBI s1;
	s1.getROI();
	BOB b1;
	b1.getROI();
	ICICI c1;
	c1.getROI();
	
}