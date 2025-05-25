#include <iostream>                                             // header untuk c++
#include <conio.h>                                              // header untuk fungsi getche() dan getch()
using namespace std;                                            // menggunakan namespace std agar tidak perlu menulis std:: sebelum fungsi cout, cin, dll


int main() {                                                    // fungsi utama atau tempat isi kodingan.
    string nama ;                                               // deklarasi variabel string untuk menyimpan nama
    char kom, jeniskelamin;                                     // deklarasi variabel char untuk menyimpan kom dan jeniskelamin
    int  Nim;                                                   // deklarasi variabel integer untuk menyimpan NIM     
    float ip;                                                   // deklarasi variabel float untuk menyimpan IP 


     /* untuk cattan lebih  dari 1 line*/

    cout << "Hello World!" << endl;                             // menampilkan "Hello World" di layar
    cout << "Masukkan nama anda: ";                             // menampilkan pesan untuk memasukkan nama
    //cin >> nama; ntuk memasukkan kom
    cin >> kom;                                                 // membaca input kom dar
    getline(cin, nama);                                         // getline digunakan untuk membaca string yang mungkin mengandung spasi
    cout << "masukkan Kom anda: ";                              // menampilkan pesan ui pengguna, hanya satu karakter yang akan dibaca
    cout << "masukkan Nim anda: ";                              // menampilkan pesan untuk memasukkan NIM 
    cin >> Nim;                                                 // membaca input NIM dari pengguna
    cout << "masukkan ip anda: ";                               // menampilkan pesan untuk memasukkan IP   
    cin >> ip;                                                  // membaca input IP dari pengguna   
    cout << "masukkan jeniskelamin anda (L/P) :";               // menampilkan pesan untuk memasukkan jenis kelamin
    jeniskelamin = getche();                                    //agar karakter langsung tampil tanpa menekan enter

    // Untuk Tampilkan Output
    cout << "\n" <<  "Nama anda adalah: " << nama << endl;      // menampilkan nama yang telah dimasukkan
    cout << "Kom anda adalah: " << kom << endl;                 // menampilkan kom yang telah dimasukkan  
    cout << "Nim anda adalah: " << Nim << endl;                 // menampilkan NIM yang telah dimasukkan
    cout << "ip anda adalah: " << ip << endl;                   // menampilkan IP yang telah dimasukkan
    putchar(jeniskelamin);                                      // untuk menampilkan karakter yang diinputkan pada variabel jenis_kelamin


    getch();                                                    // Karakter yang diketik tidak ditampilkan di layar
    return 0;                                                   // mengembalikan nilai 0 menandakan program telah selesai dengan sukses  

}