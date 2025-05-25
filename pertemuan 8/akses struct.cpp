#include <iostream>                                //header untuk C++
#include <string>                                  //Header untuk menggunakan tipe data string
using namespace std;                               // Menggunakan namespace std agar tidak perlu menulis std                      

struct mahasiswa {
    string nama;                                   // Menyimpan nama mahasiswa
    int umur;                                      // Menyimpan umur mahasiswa
float ipk;                                         // Menyimpan IPK mahasiswa
};

int main (){                                       // fungsi utama atau tempat isi kodingan.

    mahasiswa mhs1;                                // Membuat variabel mhs1 bertipe struct mahasiswa
 
    // Mengisi data ke dalam mhs1
    mhs1.nama = "Farid";
    mhs1.umur = 19;
    mhs1.ipk = 3.75;

    // cout << "Nama: " << mhs1.nama << endl;
    // cout << "Umur: " << mhs1.umur << endl;
    // cout << "IPK: " << mhs1.ipk << endl;
  
    mahasiswa *ptrMhs1 = &mhs1;                    // Membuat pointer ptrMhs1 yang menunjuk ke mhs1

    // Mengakses anggota struct melalui pointer
    cout << "Nama: " << ptrMhs1->nama << endl;  // akan menampilkan nama = Farid
    cout << "Umur: " << ptrMhs1->umur << endl;  //akan menampilkan  umur = 19   
    cout << "IPK : " << ptrMhs1->ipk << endl;   // akan menampilkan ipk =3.75    
}