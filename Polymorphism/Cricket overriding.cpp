//Q.2 Write a Program to implement method overriding by following the below-mentioned criteria:
//- Class Cricket -> Class T20Match 20
//- Class Cricket -> Class ODIMatch 50
//- Override the getTotalOvers() method in both classes.
#include<iostream>
using namespace std;
class Cricket
{
	protected:
		int over;
		public:
			void getTotalOvers(int over) 
			{
			   cout<<"Total over in the match : 70"<<endl;
			}
};
class T20Match : public Cricket
{
	public:
		void getTotalOvers(int over) 
		{
			this->over=over;
			cout<<"Total over in T20 match "<<over<<endl;
		}
};
class ODIMatch : public T20Match
{
	public:
		void getTotalOvers(int over) 
		{
			this->over=over;
		    cout<<"Total over in ODI match "<<over<<endl;		
		}
};
main()
{

	T20Match t1;
	t1.getTotalOvers(20);
	ODIMatch d1;
	d1.getTotalOvers(50);
}