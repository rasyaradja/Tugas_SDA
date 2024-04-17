#include <iostream>

using namespace std;

int main() {

// Deklarasi variable
int nilaiCoding;
string nilaiInterview;

// Memasukkan nilai coding
cout << "Masukkan nilai coding (0-100): ";
cin >> nilaiCoding;

// Memasukkan nilai interview
cout << "Masukkan nilai interview (A/B): ";
cin >> nilaiInterview;

// Penilaian nilai coding
string hasilNilaiCoding;

if (nilaiCoding > 80) {
    hasilNilaiCoding = "LOLOS";
} 
else if (nilaiCoding >= 60) {
    hasilNilaiCoding = "DIPERTIMBANGKAN";
} 
else {
    hasilNilaiCoding = "GAGAL";
}

// Penilaian nilai interview
string hasilNilaiInterview;
if (nilaiInterview == "A" || nilaiInterview == "B") {
    hasilNilaiInterview = "LOLOS";
} 
else {
    hasilNilaiInterview = "GAGAL";
}

// Penentuan hasil akhir
string hasilAkhir;
if ((hasilNilaiCoding == "LOLOS" || hasilNilaiCoding == "DIPERTIMBANGKAN") && hasilNilaiInterview == "LOLOS") {
    hasilAkhir = "Selamat Kamu Berhasil Menjadi Calon Programmer";
} 
else {
    hasilAkhir = "Maaf Kamu Belum Berhasil Menjadi Calon Programmer";
}

// Menampilkan hasil akhir
cout << hasilAkhir << endl;

return 0;
}
