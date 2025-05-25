#include <iostream>     // header untuk C++
#include <vector>       // header vector untuk bisa menggunakan vector
using namespace std;    // berisi fungsi fungsi untuk operasi string

int main () {
    system("CLS");                                                                  
    // Vector Declaration & Initialization

    // vector merupakan wadah kosong untuk menyimpan sementara data seperti data array dan dapat menambah data baru ataupun menghapus data yang tersimpan
    vector<string> nama_karyawan = {"alya", "farid", "ariel", "haqi", "imam"};

    // Ascending Element of Vector
    // for (int i=0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;    // menampilkan data array nama_karyawan secara berurutan
    // }

    // for (string karyawan : nama_karyawan){   //menggunakan variabel  karyawan sebagai perantar array nama_karyawan
    //     cout << karyawan << endl;
    // }

    // Add data to vector
    nama_karyawan.push_back("imam");                     // menambah data string imam ke dalam vector pada posisi terakhir atau wadah yang sudah berisi data
    // for (int i=0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;
    // }

    // Delete data from vector
    nama_karyawan.pop_back();                           // menghapus data urutan terakhir pada vector
    nama_karyawan.erase(nama_karyawan.begin() + 3);     // menghapus data sesuai index atau urutan data yang ingin dihapus
    
    
    for (int i=0; i < nama_karyawan.size(); i++){
        cout << nama_karyawan[i] <<endl;
    }

}