#include <iostream>

using namespace std;

int main() {

// Deklarasi variable
int durasiLari, durasiPushUp, durasiPlank;
int setLari, setPushUp, setPlank;
int kaloriLari, kaloriPushUp, kaloriPlank;
int totalKalori;


// Meminta input dari pengguna
cout << "Masukkan durasi lari (dalam menit): ";
cin >> durasiLari;

cout << "Masukkan jumlah set lari: ";
cin >> setLari;

cout << "Masukkan durasi push-up (dalam menit): ";
cin >> durasiPushUp;

cout << "Masukkan jumlah set push-up: ";
cin >> setPushUp;

cout << "Masukkan durasi plank (dalam menit): ";
cin >> durasiPlank;

cout << "Masukkan jumlah set plank: ";
cin >> setPlank;

// Menghitung kalori yang dibakar
kaloriLari = (durasiLari / 5) * 60 * setLari;
kaloriPushUp = (durasiPushUp / 30) * 200 * setPushUp;
kaloriPlank = durasiPlank * 5 * setPlank;

// Menghitung total kalori
totalKalori = kaloriLari + kaloriPushUp + kaloriPlank;

// Menampilkan hasil
cout << "Total kalori yang dibakar: " << totalKalori << endl;

return 0;
}
