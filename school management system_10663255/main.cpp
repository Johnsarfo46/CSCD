
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

#include "Student.h"
#include "Admin.h"
#include "Lecturer.h"

using namespace std;

int main()
{

    // Variable declaration

    int My_Choice;
    string My_ID;
    int Student_X;
    int Mystaff_Num;
    string Mystaff_ID;
    int Course_Num;
    int num_st;

    Student Eastman;

    Admin Dangote;

    Lecturer NanaSarfo;



    while(1)
    {
     // Records to be Display

        cout << "  University Basic School Management system " << endl << endl;
        cout << "Enter an option: "<< endl;
        cout << ">[1] Student" << endl;
        cout << ">[2] Administrator" << endl;
        cout << ">[3] Staff" << endl;
        cout << ">[4] Exit"<<endl;
        cout << ">: ";
        cin >> My_Choice;

        // Switch statement to display a menu based on the user's input
        // For example, supposing the user selects option 1, add a student, the program displays all the menu under the add a student option

        switch(My_Choice)
        {
        case 1:
            {
        cout << ">[1] Add Student" << endl;
        cout << ">[2] Edit Student" << endl;
        cout << ">[3] Delete Student" << endl;
        cout << ">[4] Print student record" << endl;
        cout << ">[5]  Exit" << endl;
        cout << ">: ";
        cin >> My_Choice;



        switch(My_Choice)
        {
        case 1:
            {

                cout << "Enter the number of students: ";
                cin >> num_st;


            Eastman.addStudent(Student_X,num_st);
            }
            break;


        case 2:
            {
                cout << "Enter student id: ";
                cin >> My_ID;

                Eastman.editStudent(My_ID);
            }
            break;
        case 3:
            {

                cout << "Enter the id: ";
                cin >> My_ID;

                Eastman.deleteStudent(My_ID);
            }
            break;
        case 4:
            {
                Eastman.printRecord();
                cout << "Done" << endl;
            }
            break;
        default:
            {
                break;
            }

        }

        case 2:
            {
        cout << ">[1] Add Staff" << endl;
        cout << ">[2] Edit Staff" << endl;
        cout << ">[3] Delete Staff" << endl;
        cout << "[4]  Exit" << endl;
        cout << ">: ";
        cin >> My_Choice;

        switch(My_Choice)
        {
        case 1:
            {
                cout << "Enter the number of Staff: ";
                cin >> Mystaff_Num;

                 Dangote.add_staff(Mystaff_Num);

            }
            break;
        case 2:
            {
                cout << "Enter ID: ";
                cin >> Mystaff_ID;

                Dangote.edit_staff(Mystaff_ID);
            }
            break;
        case 3:
            {
                cout << "Enter ID: ";
                cin >> Mystaff_ID;

                Dangote.delete_staff(Mystaff_ID);


            }
            break;
        default:
            {
                break;
            }

        }
            }

        case 3:
            {
        cout << "Enter an option"<< endl;
        cout << ">[1] Assign course" << endl;
        cout << ">[2] Enter Marks" << endl;
        cout << "[4]  Exit" << endl;
        cout << ">: ";
        cin >> My_Choice;

        switch(My_Choice)
        {
        case 1:
            {

                cout << "Enter the number of students: ";
                cin >> num_st;
                cout << "Enter Student ID: ";
                cin >> My_ID;

               NanaSarfo.assign_course(My_ID,num_st);
            }
            break;
        case 2:
            {
                cout << "Enter the number of courses: ";
                cin >> Course_Num;

                NanaSarfo.student_mark(Course_Num);
            }
            break;
        default:
            {
                break;
            }
            break;
        }

            }

            }
        }

    }

    return 0;
}
