#include <iostream>                                          // header untuk C++
using namespace std;                                         // menggunakan namespace std agar tidak perlu menulis std:: sebelum fungsi cout, cin, dll    

const double PI = 3.141592653589793;                         // mendeklarasikan konstanta PI dengan nilai 3.141592653589793

int main() {                                                 // fungsi utama atau tempat isi kodingan    
    float luas, volume, r;                                   // mendeklarasikan variabel luas, volume, dan jari-jari bola (r) sebagai float

    cout << "Masukkan jari-jari bola: ";                     // menampilkan pesan untuk memasukkan jari-jari bola
    cin >> r;                                                // membaca input jari-jari bola dari pengguna

    luas = 4 * PI * r * r;                                   // menghitung luas permukaan bola   
    cout << "Luas permukaan bola = " << luas << endl;        // menampilkan luas permukaan bola


    volume = (4.0 / 3.0) * PI * r * r * r;                   // menghitung volume bola
    cout << "Volume bola = " << volume << endl;              // menampilkan volume bola

    return 0;                                                // mengembalikan nilai 0 menandakan program telah selesai dengan sukses    
}