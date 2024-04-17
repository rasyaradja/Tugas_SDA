#include <iostream>

using namespace std;

int main() {

// Deklarasi Variable
int umur, tinggi;

// Meminta input dari pengguna
cout << "Masukan Umur Anak: ";
cin >> umur;

cout << "Masukan tinggi Anak (dalam centimeters): ";
cin >> tinggi;

//Menentukan Harga Tiket
if (umur < 1) {
    cout << "Dilarang masuk" << endl;
} 
else if (umur <= 3) {
    if (tinggi > 70) {
        cout << "Tarif: Rp 40.000" << endl;
    } 
    else {
        cout << "Tarif: Rp 30.000" << endl;
    }
} 
else if (umur <= 7) {
    if (tinggi > 120) {
        cout << "Tarif: Rp 55.000" << endl;
    } 
    else {
        cout << "Tarif: Rp 40.000" << endl;
    }
} 
else if (umur <= 10) {
    if (tinggi > 150) {
        cout << "Tarif: Rp 70.000" << endl;
    } 
    else {
        cout << "Tarif: Rp 50.000" << endl;
    }
} 
else {
    cout << "Tarif: Rp 80.000" << endl;
}

return 0;
}
