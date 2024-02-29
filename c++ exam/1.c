#include<iostream>
using namespace std;
class Movie
{
	
	public:
		int year;
		string title,genre;
		void set()
		{
			cout<<"Enter title :";
			getline(cin,title);
			cout<<"Enter genre :";
			getline(cin,genre);
			cot<<"Enter relesedYear :";
			cin>>year;
			cin.ignore();
		}
		void get()
		{
			cout<<"Title :"<<title<<endl;
			cout<<"Genre :"<<genre<<endl;
			cout<<"RelesedYear :"<<endl;
		}
};
main()
{
	Movie *m1[2];
	
	m1[0]->set();
	m1[1]->get();
	
}