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

    // Luas Segitiga
    double a, t, luas;

    cout << "Masukkan alas : ";
    cin >> a;

    cout << "Masukkan tinggi : ";
    cin >> t;

    luas = 0.5 * a * t;

    cout << "Luas segitiga : " << luas << endl;

    return 0;
}
