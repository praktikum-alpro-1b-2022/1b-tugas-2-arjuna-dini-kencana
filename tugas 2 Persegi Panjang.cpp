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


    int p, l, luas;

    cout << "Masukkan Panjang : ";
    cin >> p;

    cout << "Masukkan lebar : ";
    cin >> l;

    luas = p * l;

    cout << "Luas Persegi panjang adalah : " << luas << endl;

    return 0;

}
