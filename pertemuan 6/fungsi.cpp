#include <iostream>  // header untuk C++
using namespace std; //menggunakan namespace std agar tidak perlu menulis std:: sebelum fungsi cout, cin, dll 

//Fungsi tanpa nilai balikan
void tampilkanPesan() {
    cout << "=== SELAMAT DATANG DI AP 2 ===" << endl;
}

// Fungsi dengan nilai balikan ( membalikan nilai seperti dengan melakukan operasi matematika)
int tambah(int a, int b) {
    return a + b;
}

//fungsi overload (kemampuan untuk mendefenisikan beberapa fungsi dengan keadaan dimana terdapat nama fungsi yang sama namun jumlah atau tipe data parameternya berbeda)
int kali(int a, int b) {
    return a * b;
}

double kali(double a, double b) {
    return a * b;
}

//fungsi rekursif (Fungsi yang memanggil dirinya sendiri)
int faktorial(int n) {
    if (n == 0 || n ==1){
        return 1;
    }else {
        return n * faktorial(n-1);// fungsi 'faktorial' memanggil dirinya sendiri
    }
}

int main () {
    system ("CLS");     //membersihkan layar konsol pada windows

    // menggunakan fungsi tanpa nilai balikan
    tampilkanPesan();

    int x = 5, y = 3;

    //menggunakan fungsi dan nilai balikan 
    int hasilTambah = tambah(x, y);
    cout << "Hasil penjumlahan : " << hasilTambah << endl;

    //menggunakan fungsi overload
    int hasilKaliInt = kali(x, y);
    double hasilKaliDouble = kali(5.5, 2.0);

    cout << "hasil perkalian (int) : " << hasilKaliInt << endl;
    cout << "Hasil perkalian (double) : " << hasilKaliDouble << endl;

    // menggunakan fungsi rekursif
    int angka = 5;
    cout << "Faktorial dari " << angka << " adalah : " << faktorial(angka) << endl;
}