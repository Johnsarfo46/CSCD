#include "Student.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;



void Student:: addStudent(int Numb,int stnum)
{


    for (int i=0;i < stnum; i++)
    {
        cout << " Enter your full name: ";
        cin >> S_Name[i];
        cout << " Your Student ID: ";
        cin >> S_ID[i];
        cout << " Your Course: ";
        cin >>S_Course[i];
        cout << " Your Level: ";
        cin >> S_Level[i];
        cout << "Email: ";
        cin >> S_Email[i];
        cout << "Address: ";
        cin >> S_Address[i];

    }
    cout << endl;
}

void Student::editStudent(string STD_ID)
{
    for (int i=0;i<S_Num; i++)
    {
        if(STD_ID==S_ID[i])
        {
            continue;
        }

        addStudent(i,S_Num);

    }
}

void Student::showStudent(int Numb)
{
    for (int i=0; i<S_Num; i++)
    {
        cout << "Name \t ID \t Course \t Level \t Email \t Address" << endl;
        cout << S_Name[i] << "\t" << S_ID[i] <<  "\t" << S_Course[i] << "\t" << S_Level[i] << "\t" <<S_Email[i];
        cout << "\t" << S_Address[i];
    }
    cout << endl;
}

void Student::deleteStudent(string STD_ID)

{


    for (int i=0; i<S_Num; i++)
    {
        STD_ID==S_ID[i];
       showStudent(i);
       cout << "Do you want to delete this?" << endl;
       cout << "1.Yes" << endl;
       cout << "99.No" << endl;
       cout << ">: ";
       cin >> choice;

        switch(choice)
        {
        case 1:

            {
                S_Name[i]="";
                S_ID[i]="";
            }
            break;
        default:
            break;
        }

    }
}


void Student:: printRecord()
{
    ofstream Student;
    Student.open("student_database.txt",ios::app);




       for (int i=0; i <S_Num;i++)
       {
           Student << S_Name[i]<< endl;
           Student << S_ID[i]<< endl;
           Student << S_Course[i]<< endl;
           Student << S_Level[i]<< endl;
           Student << S_Email[i]<< endl;
           Student << S_Address[i]<< endl;

        Student <<  "************************************************************************************************" << endl;

       }
       Student << endl;

       Student <<  "************************************************************************************************" << endl;


}
