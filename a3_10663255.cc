#include <iostream>

using namespace std;

int main()
{
    double grade;

    cout << " enter grade ";
    cin >> grade;

    if ((grade > 80) && ( grade < 100)){

        cout <<" grade is " <<"A";
    }
    else if ((grade > 74) && (grade < 80)){

        cout <<" grade is " <<"B+";
    }
    else if ((grade > 69) && (grade < 75)){

        cout <<" grade is " <<"B";
    }
    else if ((grade > 64) && (grade <70)){

        cout <<" grade is " <<"C+";
    }
    else if ((grade >59) && (grade < 65)){

        cout <<" grade is " << "C";
    }
    else if ((grade >54) && (grade <60)){

        cout <<" grade is " <<"D+";
    }
    else if ((grade >49) && (grade <55)){

        cout <<" grade is " <<"D";
    }
    else if ((grade > 44) && (grade <50)){

        cout <<" grade is "<<"E";
    }
    else if ((grade >0) && (grade <44)){

        cout <<" grade is "<<"F";
    }










    return 0;
}
