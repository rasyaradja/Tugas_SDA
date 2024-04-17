#include <iostream>

using namespace std;

int main() {

// Deklarasi variable
string nama, tempatTinggal;
int umur;
double uangTabungan;

// Input data
cout << "Masukkan nama: ";
cin >> nama;
cout << "Masukkan umur: ";
cin >> umur;
cout << "Masukkan tempat tinggal: ";
cin >> tempatTinggal;
cout << "Masukkan uang tabungan (dalam dollar): $";
cin >> uangTabungan;

// Analisis ciri-ciri untuk Don
if (umur > 40 && (tempatTinggal == "Nevada" || tempatTinggal == "New York" || tempatTinggal == "Havana") && uangTabungan >= 10000000) {
    cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat Don." << endl;
return 0;
}

    // Analisis ciri-ciri untuk Underboss
else if (umur >= 25 && umur <= 40 && (tempatTinggal == "New Jersey" || tempatTinggal == "Manhattan" || tempatTinggal == "Nevada") && uangTabungan >= 1000000 && uangTabungan <= 2000000) {
    cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat Underboss." << endl;
return 0;
}

// Analisis ciri-ciri untuk Capo
else if (umur >= 18 && umur <= 24 && (tempatTinggal == "California" || tempatTinggal == "Detroit" || tempatTinggal == "Boston") && uangTabungan < 1000000) {
    cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat Capo." << endl;
return 0;
}

// Jika tidak memenuhi syarat, tampilkan pesan tidak mencurigakan
else
    cout << nama << " tidak mencurigakan." << endl;

return 0;
}
