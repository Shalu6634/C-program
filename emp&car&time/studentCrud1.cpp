#include<iostream>
#include<string.h>
using namespace std;


class Student
{
public:
    int id,age;
    string name;
public:
     void addStudent()
     {

         cout<<"Enter student id : ";
         cin>>id;
         cout<<"Enter student name : ";
         cin>>name;
         cout<<"Enter student age : ";
         cin>>age;

     }
     void modifyDetail(Student &student,int newId,int newAge,string newName)
     {
         student.id = newId;
         student.age = newAge;
         student.name =  newName;
         cout<<"Successfully";

     }

     void displayStudentDetail()
     {
         if(name!=""&&id!=NULL&&age!=NULL)
         {
             cout<<"\n\n student id : "<<id<<endl;
             cout<<"student name : "<<name<<endl;
             cout<<"student age : "<<age<<endl;
         }


     }

     void deleteStudentDetail(Student &student)
     {
         student.id=NULL;
         student.name="";
         student.age=NULL;

         cout<<"deleted---";

     }

};

void modifyStudentDetail(Student &student,int id)
{
    if(student.id == id)
    {
        int newId,newAge;
        string newName;

         cout<<"Enter new student id : ";
         cin>>newId;
         cout<<"Enter new student name : ";
         cin>>newName;
         cout<<"Enter new student age : ";
         cin>>newAge;

        student.modifyDetail(student,newId,newAge,newName);
        return;
    }

}

void deleteDetail(Student &student,int id)
{
    if(student.id == id)
    {
        student.deleteStudentDetail(student);
        return;
    }

}
int main()
{
    int maxStudent=100;
    int n=0;
    Student student[maxStudent];


    int choice;
    do
    {

        cout << "\n===== STUDENT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add New Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Modify Student Details\n";
        cout << "4. delete Student Details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                student[n].addStudent();
            break;
            case 2:
               for(int i=0; i<maxStudent; i++)
               {
                    student[i].displayStudentDetail();
               }
            break;
            case 3:int id;
                cout<<"enter id: ";
                cin>>id;
                for(int i=0; i<maxStudent; i++)
                {
                    modifyStudentDetail(student[i],id);

                };
                break;
             case 4:

                cout<<"enter id: ";
                cin>>id;
                for(int i=0; i<maxStudent; i++)
                {
                    deleteDetail(student[i],id);
                };
                break;

                case 5:cout<<"Exit---";
        }
         n++;

    }while(choice!=5);
}
