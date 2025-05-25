#include <iostream>     // header untuk C++
using namespace std;    // menggunakan namespace std agar tidak perlu menulis std:: sebelum fungsi cout, cin, dll

// Fungsi tanpa nilai kembalian
void sapa(string nama){ // nama = parameter formal
    cout << "Hallo  " << nama << " ! selamat Datang  di AP 2 !" << endl; //akan menampilkan output Hallo Arkan Selamat Datang di AP 2!
}
    //Parameter formal adalah parameter yang ada saat fungsi dibuat
     //Parameter Aktual adalah parameter yang digunakan saat dipanggil fungsi
int main () {
    string namapengguna = "Farid";
    sapa(namapengguna); // namapengguna sebagai Parameter Aktual dibuat pada saat pemanggilan Fungsi, nama parameter aktual akan berubah menjadi nama parameter formal ketika masuk ke fungsi
    return 0;           // mengembalikan nilai 0 menandakan program telah selesai dengan sukses
}