#include <iostream>
using namespace std;

int main () {
    float panjang, lebar, luas;

    cout << "Masukkan panjang: " << endl;
    cin >> panjang;

    cout << "Masukkan lebar: " << endl;
    cin >> lebar;

    luas = panjang * lebar;

    cout << "Luas persegi panjang = " << luas << endl;
    return 0;
}