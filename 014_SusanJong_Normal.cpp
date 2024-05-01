#include <iostream>
using namespace std;

// Fungsi untuk mencari pbb dengan menggunakan algoritma Euclidean
int fpbeuclidean(int m, int n) { 
   int r;
   while (n != 0) { 
      r = m % n; // var nampung hasil sisa pembagian dari m dan n 
      m = n; // var untuk bilangan positif yang ingin dicari FPB-Nya
      n = r; //masukkan nilai r kedalam variabel n.
   }
   
   return m; //Hasil FPB dari m dan n adalah nilai m.
}

int main() {
   char ulangin; //variabel untuk melakukan perulangan untuk jalanin program ya/tidak
   do { // untuk melakukan looping pada opsi ingin melakukan program perulangan/tidak

      system("cls");
      
      int m, n; // m untuk nampung bilangan ke 1 dan n untuk bilangan ke2
//masukkan bilangan 1 dan bilangan 2
      cout << "==============KALKULATOR MENCARI FPB================" << endl;
      cout << "Masukkan bilangan pertama : ";
        cin >> m;
      cout << "Masukkan bilangan kedua : ";
         cin >> n;

      int fpb = fpbeuclidean(m, n); //variabel fpb untuk meyimpan hasil dari fungsi fpbeuclidean yang dimana fungsi ini
      //sambungan penjelasan pendeklarasian diatas --> untuk meneruskan var m dan var n

    //setelah hasil fpb telah didapat dan disimpan di var fpb tadi yang diatas itu 
      cout << "\nHasil faktor persekutuan terbesar dari " << m << " dan " << n << " adalah " << fpb << endl; //tampilin hasil fpb-Nya

      // Request ingin melakukan perulangan atau tidak
      cout << "Apakah ingin melakukan perulangan pada program ini? (y/t): ";
        cin >> ulangin;
   } 
   
   //opsi melakukan ulangin program atau tidak
   while (ulangin == 'Y' || ulangin == 'y'); // looping melakukan opsi perulangan program fpb 
    cout << "================================================================" << endl;
        cout << "Terimakasih user sudah melakukan perintah pada program ini";

   return 0;
}