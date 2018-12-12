/**
This is a the Student class which helps us to create student objects.
The class contains functions and data members to help us process instances of this class
**/

#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>

using namespace std;

class Student
{

    public:

        int choice;
         string S_Name[1500];
        string S_ID[1500];
        string S_Course[1500];
        string S_Level[1500];
        string S_Email[1500];
        string S_Address[1500];
        int S_Num;



        void addStudent(int Numb,int stnum);
        void deleteStudent(string STD_ID);
        void editStudent(string STD_ID);
        void showStudent(int Numb);
        void printRecord();

    protected:

    private:

};

#endif // STUDENT_H
