#include <iostream> 
using namespace std;

// Struktuer Class
// class nama_class{
//     private:
//         anggota_private;
//     protected:
//         anggota_protected;
//     public:
//         anggota_public;
// };

class contoh_akses {
    private:                // anggota yang hanya bisa diakses oleh class itu sendiri
        int privateVar;
    protected:              // anggota yang bisa diakses oleh parent dan child class
        int protectedVar;
    public:                 // anggotanya bisa diakses dari luar class
        int publicVar;

    // Constructor (fungsi khusus yang akan otomatis dipanggil saat objek dibuat)
    contoh_akses(){         // isi constructor
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }

    void tampilkanSemua(){                              // fungsi tanpa  nilai balikan, hanya untuk menampilkan keluaran
        cout << "Akses dari dalam data : " << endl;     // dapat diakses di dalam class sehingga menampilkan 1
        cout << privateVar << endl;                     // dapat diakses di dalam class sehingga menampilkan 2
        cout << protectedVar << endl;                   // dapat diakses di dalam class sehingga menampilkan 3
        cout << publicVar << endl;
    }
};                                                      // class harus diakhiri dengan ;

// kelas turunan 
class turunan : public contoh_akses {                   // class turunan bisa mewarisi semua atribut milik class contoh_akses
    public:
        void aksesProtected(){
            cout << "Akses publicVar : " << publicVar << endl;           // dapat diakses di class turunan sehingga menampilkan 3
            cout << "Akses protectedVar : " << protectedVar << endl;     // dapat diakses di class turunan sehingga menampilkan 2
            // cout << "Akses privateVar : " << privateVar << endl; Akan error, karena hanya bisa diakses oleh class parent
        }
};

int main(){                     // program utama
    contoh_akses objek;         // deklarasi variabel bertipe 'contoh_akses'
    objek.tampilkanSemua();     //  memanggil fungsi tanpa balikan 

    cout << "\nAkses dari luar class : " << endl;
    // cout << objek.privateVar << endl; // Akan error
    // cout << objek.protectedVar << endl; // Akan error
    cout << objek.publicVar << endl; 

    turunan tur;               // mmembuat tur menjadi class turunan
    tur.aksesProtected();      // memanggil fungsi tanpa nilai balikan

}