#include <iostream>
#include <string>

using namespace std;

int main (){

    // Data diri saya
    string nama = "Arjuna Dini Kencana";
    long long npm = 2210631170009;

    cout << "Nama : " << nama << endl;
    cout << "NPM : " << npm << endl;
    cout << " " << endl;

    // Layang Layang
    double d1, d2, luas;

    cout << "Masukkan D1 : ";
    cin >> d1;

    cout << "Masukkan D2 : ";
    cin >> d2;

    luas = 0.5 * d1 * d2;

    cout << "Luas Layang-Layang : " << luas << endl;

    return 0;
}
