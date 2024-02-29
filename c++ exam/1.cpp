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
			
			cout<<"Enter relesedYear :";
			cin>>year;
			cin.ignore();
			
		}
		void get()
		{
			cout<<"Title :"<<title<<endl;
			cout<<"Genre :"<<genre<<endl;
			cout<<"RelesedYear :"<<year<<endl;
		}
};
main()
{
	Movie m1[2];
//	m1.set();
//	m1.get();
	for(int i=0; i<2; i++)
	{
	  m1[i].set();
	  
	  m1[i].get();
    }
	return 0;
}