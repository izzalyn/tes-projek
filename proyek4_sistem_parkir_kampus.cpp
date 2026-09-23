#include <iostream>
using namespace std;

int main() {
    int jenis, durasi, biaya;
    cout << "=== SISTEM PARKIR KAMPUS ===" << endl;
    cout << "1. Motor" << endl;
    cout << "2. Mobil" << endl;
    cout << "Pilih jenis kendaraan (1/2): ";
    cin >> jenis;

    cout << "Masukkan durasi parkir: ";
    cin >> durasi;

    if (jenis == 1) {
        if (durasi <=1) {
            biaya = 2000;
        } else {
            biaya = 2000 + (durasi - 1) * 1000;
        
        }
    } else if (jenis == 2) {
        if (durasi <=1) {
            biaya = 5000;
        } else {    
            biaya = 5000 + (durasi - 1) * 2000;
    }     
    
}
    cout << "Total biaya parkir: Rp" << biaya << endl;

return 0;
}
