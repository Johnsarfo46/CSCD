#include <iostream>

int HighestCommonFactor(int my1num,int my2num);
using namespace std;



int main()
{

    cout << "welcome to Nanasarfo Highest Common Factor"<< endl;

    int b,a;

    cout << "Enter my 1 integer"<< endl;
    cin >>b;

    cout << "Enter my 2 integer"<< endl;
    cin >>a;

    int high_fact;

    high_fact = HighestCommonFactor(b,a);

    cout << "The Highest common divisor of the two numbers is :  "<< high_fact<<endl;



    return 0;
}

int HighestCommonFactor(int my1num,int my2num)
{
    if(my2num != 0)
    {
        return(my2num,my1num %my2num);
    }
    else
    {
        return my1num;
    }
}
