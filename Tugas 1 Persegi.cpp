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


    int s, l;

    //Persegi setiap sisinya sama
    cout << "Masukan sisi  : ";
    cin >> s;

    l = s * s;

    cout << "Luasnya Persegi : " << l << endl;

    return 0;
}
