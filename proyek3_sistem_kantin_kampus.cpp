#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    int harga1, qty1, subtotal1;
    int harga2, qty2, subtotal2;
    int total;

    cout << "=== KANTIN KAMPUS ===" << endl;
    
    cout << "Masukkan harga makanan 1 : Rp";
    cin >> harga1;
    cout << "Masukkan jumlah beli    : ";
    cin >> qty1;
    subtotal1 = harga1 * qty1;

    cout << endl;

    cout << "Masukkan harga makanan 2 : Rp";
    cin >> harga2;
    cout << "Masukkan jumlah beli    : ";
    cin >> qty2;
    subtotal2 = harga2 * qty2;

    total = subtotal1 + subtotal2;

    cout << "\n===============================" << endl;
    cout << "     STRUK TOTAL PEMBAYARAN    " << endl;
    cout << "===============================" << endl;
    cout << "Subtotal Makanan 1 : Rp" << subtotal1 << endl;
    cout << "Subtotal Makanan 2 : Rp" << subtotal2 << endl;
    cout << "-------------------------------" << endl;
    cout << "TOTAL BAYAR        : Rp" << total << endl;
    cout << "===============================" << endl;

    return 0;
}