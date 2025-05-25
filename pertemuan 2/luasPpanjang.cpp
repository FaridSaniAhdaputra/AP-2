#include <iostream>;                        // header untuk C++
using namespace std;                        // menggunakan namespace std agar tidak perlu menulis std:: sebelum fungsi cout, cin, dll

int main()                                  // Fungsi utama atau tempat isi kodingan
{
    float luas, p, l;                       // Deklarasi variabel luas, panjang (p), dan lebar (l) sebagai float

    system("cls");                          // Membersihkan layar konsol

    cout << "Masukkan panjang: ";           // Menampilkan pesan untuk memasukkan panjang
    cin >>  p;                              // Membaca input panjang dari pengguna    

    cout << "Masukkan lebar: ";             // Menampilkan pesan untuk memasukkan lebar
    cin >> l;                               // Membaca input lebar dari pengguna

    luas = p * l;                           // Menghitung luas persegi panjang
    cout << "Luas : " << luas << endl;      // Menampilkan hasil luas persegi panjang

    return 0;                               // Mengembalikan nilai 0 menandakan program telah selesai dengan sukses
}