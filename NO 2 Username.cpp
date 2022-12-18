/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main(){
    string uname, pw;

    cout << "Masukkan Username dan Password Anda!" <<endl;
    cin >> uname;
    cin >> pw;

    if (uname == "Ferr27"){
        if (pw == "Liaag27"){
            cout << "Username dan Password sesuai, Login Berhasil";
        }else{
            cout << "Username sesuai, Password salah, Login Gagal";
        }
    }else{
        if(pw == "Liaag27"){
            cout << "Username salah, Password sesuai, Login Gagal";
        }else
            cout << "Username dan Password salah, Login Gagal";
        }


    return 0;
}