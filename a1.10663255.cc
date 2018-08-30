#include <iostream>

using namespace std;

int main()
{
    int num;

    bool PrimeNum= true;

    cout <<"Enter a positive number"<< endl;

     cin >> num;

   if(num==0)
   {
       if(num==1)

       cout << "not a prime number";
   }
    else
    {
        for(int cal=2; cal<num;cal++)
        {
            if(num%cal==0)
            {
                PrimeNum=false;
                break;
            }
        }

            if(num)
            {
                cout << "Is not a prime number";
            }
            else
            {
                cout << "Is a prime number";
            }
    }

    return 0;
}
