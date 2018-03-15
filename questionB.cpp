/*Write a C++ program to read in an integer and print out the corresponding sequence of numbers.*/
#include <iostream>
using namespace std;
int main()
{
        int n;
          cout <<"Please enter an integer: ";
          cin >> n;
          cout << "The result is "<< n << " ";
          do
          {
            if( n%2 == 1 && n != 1)
               {
                 n = 3*n + 1;
                 cout << n << " ";
               }
            else
               {
                n = n / 2;
                cout<< n << " ";
               }

        }while (n != 1);

        return 0;

}

