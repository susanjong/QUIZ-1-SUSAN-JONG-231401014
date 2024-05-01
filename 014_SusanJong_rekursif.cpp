#include <iostream>
using namespace std;

// Fungsi untuk mencari FPB dengan menggunakan algoritma Euclidean secara rekursif
int fpb(int m, int n) {
    if (m == 0) { // Jika m adalah 0, maka FPB adalah n
        return n; 
    } else if (n == 0) { // Jika n adalah 0, maka FPB adalah m
        return m;
    } else {
        // Terjadinya rekursif di bagian ini
        return fpb(n, m % n); // Jika kedua m dan n tidak 0, fungsi akan memanggil dirinya sendiri dengan n dan sisa dari m dibagi n (m % n).
    }
}

int main() {
    char ulangin; // Variabel untuk melakukan perulangan untuk menjalankan program ya/tidak
    do { // Untuk melakukan looping pada opsi ingin melakukan program perulangan/tidak
        system("cls");

        int m, n;
        cout << "==============KALKULATOR MENCARI FPB================" << endl;
        
        cout << "Masukkan bilangan pertama : ";
            cin >> m;
        cout << "Masukkan bilangan kedua : ";
            cin >> n;
        // Tampilkan hasil FPB dari kedua bilangan
        cout << "\nHasil faktor persekutuan terbesar dari " << m << " dan " << n << " adalah " << fpb(m, n) << endl; // Tampilkan hasil FPB-nya
        // Request ingin melakukan perulangan atau tidak
        cout << "Apakah ingin melakukan perulangan pada program ini? (y/t): ";
            cin >> ulangin;
    } 
    
    //opsi melakukan ulangin program atau tidak
    while (ulangin == 'Y' || ulangin == 'y'); // Looping melakukan opsi perulangan program FPB 

    cout << "================================================================" << endl;
        cout << "Terimakasih user sudah melakukan perintah pada program ini";

    return 0;
}