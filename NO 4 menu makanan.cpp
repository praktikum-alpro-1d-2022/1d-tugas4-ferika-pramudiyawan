/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main(){
    int angkaMenu;
    cout << "        Menu Restaurant KedaiYuhu        " << endl;
    cout << " =======================================" << endl;
    cout << "|1. Nasi Goreng Informatika      Rp.5000|" << endl;
    cout << "|2. Nasi Soto Ayam Internet      Rp.7000|" << endl;
    cout << "|3. Gado Gado Disket             Rp.4500|" << endl;
    cout << "|4. Bubur Ayam LAN               Rp.4000|" << endl;
    cout << " =======================================" << endl;
    cout << "\n";
    cout << "Masukkan Pilihan Anda: ";
    cin >> angkaMenu;

    if (angkaMenu == 1)
        cout << "Pilihan No.1 Nasi Goreng Informatika Rp.5000";
    else if (angkaMenu == 2)
        cout << "Pilihan No.2 Nasi Soto Ayam Internet Rp.7000";
    else if (angkaMenu == 3)
        cout << "Pilihan No.3 Gado Gado Disket Rp.4500";
    else if (angkaMenu == 4)
        cout << "Pilihan No.4 Bubur Ayam LAN Rp.4000";
    else
        cout << "Menu tida tersedia/tidak valid";
    return 0;
}