#include <iostream>

using namespace std;

int main() {

// Deklarasi variable
int nomorPunggung;
string posisi;

// Input data
cout << "Masukkan nomor punggung pemain: ";
cin >> nomorPunggung;

// Cek posisi berdasarkan nomor punggung
if (nomorPunggung % 2 == 0) {
    if (nomorPunggung >= 50 && nomorPunggung <= 100) {
        posisi = "Berhak dipilih sebagai Captain Team";
    } else {
        posisi = "Target Attacker";
    }
} 
else {
    if (nomorPunggung > 90) {
        posisi = "Playmaker";
    } 
    else if (nomorPunggung % 3 == 0 && nomorPunggung % 5 == 0) {
        posisi = "Keeper";
    } else {
        posisi = "Defender";
    }
}

// Menampilkan hasil akhir
cout << "Pemain dengan nomor punggung " << nomorPunggung << " berposisi sebagai " << posisi << endl;

return 0;
}
