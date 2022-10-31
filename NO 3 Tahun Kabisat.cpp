/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int tahun;
    cout << "Masukkan Tahun: ";
    cin >> tahun;

    cout << "Tahun tersebut adalah tahun ";
    if (tahun%4 == 0)
        cout << "Kabisat";
    else
        cout <<"Bukan kabisat";
    return 0;
}