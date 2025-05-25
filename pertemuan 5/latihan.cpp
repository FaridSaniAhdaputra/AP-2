#include <iostream>     // header untuk C++
using namespace std;    // menggunakan namespace std agar tidak perlu menulis std:: sebelum fungsi cout, cin, dll

int main() {            
    system("CLS");      //membersihkan layar konsol pada windows
    // penjumlahan matriks 2 x 2
    int matriks1[2][2];
    int matriks2[2][2];
    int hasil[2][2];

    cout << "matriks  1  " << endl;   // data  nilai pada variabel matriks1
    for (int i = 0; i < 2; i++) {     // mengatur bagian baris
        for (int j = 0; j < 2; j++) { // mengatur bagian kolom
            cout << "masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
            cin >> matriks1[i][j]; // mengisi nilai untuk tiap elemen sesuai baris dan kolom paada matriks 1
        }
    }

    cout << "matriks 2  " << endl;      // data  nilai pada variabel matriks2
    for (int i = 0; i < 2; i++) {       // mengatur bagian baris
        for (int j = 0; j < 2; j++) {   // mengatur bagian kolom
            cout << "masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
            cin >> matriks2[i][j];  //mengisi niali untuk tiap elemen sesuai baris dan kolom pada matriks 2
        }
    }

    cout << "Hasil Penjumlahan : " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];      //menjumlahkan sesuai baris dan kolom 
            cout << hasil[i][j] << " ";                         //menampilkan hasil penjumlahan
        }
        cout << endl;
    }
}