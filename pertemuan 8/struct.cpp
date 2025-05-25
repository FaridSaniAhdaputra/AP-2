#include <iostream>
#include <vector>       // STL atau wadah yang menyediakan untuk sekumpulan data seperti array

using namespace std;


struct alamat {          //Struct merupakan kumpulan variabel dengan tipe data yang berbeda-beda, yang digunakan untuk membuat tipe data baru.
    string jalan;        //variabel jalan bertipe data string
    string kota;         // variabek kota bertipe  data string
    int kodepos;         // variabel kodePos bertipe  data integer
};                       //diakhiri dengan ;

struct Mahasiswa{
    string nama;
    int umur;
    float ipk;
    alamat alamat_mahasiswa;    // nested struct, struct yang berada di dalam struct
};

int main(){
    Mahasiswa mhs1;             // deklarasi variabel 'mhs1' dengan tipe data 'Mahasiswa'

    mhs1.nama = "Farid";
    mhs1.umur = 19;
    mhs1.ipk = 3,75;

    // mhs1.alamat_mahasiswa.jalan = "Jl.Tempuliing no 91a";
    // mhs1.alamat_mahasiswa.kota = "Medan";
    // mhs1.alamat_mahasiswa.kodepos = 20222;

    // cout << "Alamat : " << mhs1.alamat_mahasiswa.jalan << " Kota " << mhs1.alamat_mahasiswa.kota << " Kodepos " << mhs1.alamat_mahasiswa.kodepos << endl;



    vector<Mahasiswa> mahasiswa;  // deklarasi variabel 'mahasiswa' yang berupa vector dengan tipe data 'Mahasiswa'
    int n;
    cout << "Masukkan banyak mahasiswa : ";
    cin >> n;
    
    // Membuat inputan biodata dengan for loop
    for(int i = 0;i < n;i++){
        cout << "Mahasiswa ke-" << i+1 << endl;
        cin.get();                      // menginput data sesuai variabel dengan spasi

        cout << "Masukkan Nama : "; 
        getline (cin,mhs1.nama);        // menginput data sesuai variabel dengan spasi

        cout << "Masukkan Umur : ";
        cin >> mhs1.umur;

        cout << "Masukkan ipk : "; 
        cin >> mhs1.ipk;
        mahasiswa.push_back(mhs1);      // memasukkan variabel 'mhs1' kedalam vector 'mahasiswa'
    }

     // menampilkan output biodata dengan for loop
    for(int i=0;i<n;i++){
        cout << "Mahasiswa ke-" << i+1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " << mahasiswa[i].umur << endl;
        cout << "IPK : " << mahasiswa[i].ipk << endl;
    }
}