#include <iostream>      // header untuk C++
#include <string>        // header untuk string
#include <array>         // header untuk array
using namespace std;     // menggunakan namespace std agar tidak perlu menulis std:: sebelum fungsi cout, cin, dll

int main( )              // Fungsi utama atau tempat isi kodingan
{
    //array Declaration & inisialisasi
    /*2 cara membuat array*/

    //cara 1 : array kosong     //index dimulai dari 0 dan harus diisi satu-satu
    // string nama [5];         // deklarasi array nama dengan ukuran 5

    // nama [0] = "alya";       // mengisi elemen pertama array dengan "alya"
    // nama [1] = "farid";      // mengisi elemen kedua 
    // nama [2] = "Ariel";      // mengisi elemen ketiga
    // nama [3] = "Haqi";       // mengisi elemen keempat
    // nama [4] = "Imam";       // mengisi elemen kelima

    //cara 2 : array langsung diisi     //langsunng mengisi elemen array saat deklarasi tanpa harus mengisi satu-satu
    // string nama2 [5] = {"alya", "farid", "Ariel", "Haqi", "Imam"};
    
    //Assending Element in Array        //dilakukan dengan cara manual
    // cout << nama [0] << endl;        //menmpilkan elemen pertama array nama indeks 0 Alya
    // cout << nama [1] << endl;
    // cout << nama [2] << endl;
    // cout << nama [3] << endl;
    // cout << nama [4] << endl;        //menampilkan elemen kelima array nama indeks 4 Imam

    // menggunaka looping               //menggunakan perulangan agar lebih efesien
    // for (int i = 0; i <= 4; i++){     
    //     cout << nama [i] << endl;    // menampilkan isi data array nama hingga index 4
    // }
    // }

    // Descending Element in Array use looping 
    // for (int i = 4; i >= 0; i--){           
    //     cout << nama [i] << endl;
    // }



    //Array multidimensi
    //baris 1 = 1,2,3
    //baris 2 = 4,5,6

    // int matriks [2][3] = { {1, 2, 3}, {4, 5, 6} }; // matriks berukuran 2 x 3
    // for  (int i = 0; i<2; i++ ) {
    //     for (int j=0; j<3; j++){
    //         cout << matriks [i][i] << " ";        // menampilkan isi matriks
    //     }
    //     cout << endl;
    // }

    // int matriks [4][6] = { 
    //     {1, 2, 3, 4, 5, 6}, 
    //     {7, 8, 9, 10, 11, 12}, 
    //     {13, 14, 15, 16, 17, 18}, 
    //     {19, 20, 21, 22, 23, 24} 
    // };

    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0; j < 6; j++) {
    //         cout << matriks[i][j] << " ";
    //     }
    //     cout << endl;
    // }



    //string (array of karakter)    //array dapat berisi char maupun karakter
    // string nama = "Farid";   //index 0 merupakan posisi pertama dari string
    // cout << nama[0] << endl; //akan menampilkan F
    // cout << nama[2] << endl; //akan menampilkan r

    // for (int i = 0; i < nama.length(); i++){  //array dapat berisi char atau karakter menggunakan perulangan
    //     cout << nama[i] << endl;
    // }

    // string s1 = "Hello ";
    // string s2 = "World!";

    /*1 .s1 = s2*/
    // s1 = s2;                               // variabel s1 akan memiliki isi kata World 
    // cout << "s1 = " << s1 << endl;         // akan menampilkan kata World

    /*2. s1 = s1 + s2*/                       // akan menggabungkan isi dari variabel s1 dengan variabel s2, spasi juga dihitung                        
    // s1 = "Hello ";                         //reset nilai di s1
    // cout << "hasil : " << s1 + s2 << endl; //s1 + s2 = Hello World!

    /*3. s1. legnght*/
    // cout << s1.length() << endl;
    // cout << (s1 +s2 ).length() << endl;    // akan menampilkan panjang dari gabungan string variabel s1 dan variabel s2 yaitu 10

    /* 4. s1.substr (n,m)*/ 
    // cout << s1.substr(2, 3) << endl;        // artinya kita akan mulai mengambil data string dari index ke 2 dari string variabel s1 hingga 3 index selanjutnya
    // cout << (s1 + s2).substr(5, 3) << endl; // dimulai dari indeks ke-5, sebanyak 3 karakter


    // operator sizeof //size of untuk mengetahui ukuran dari variabel, array dll.
    // int angka = 10;
    // cout << sizeof(angka) << endl;  // Mengembalikan ukuran byte dari tipe data variabelnya;

    // int nilai [] = {10, 20, 30, 40, 50};
    // cout << sizeof(nilai) << endl; //20 byte

    // string s = "Farid";
    // cout <<sizeof(s) << endl;


    //Array Library
    array<float, 5> nilai = {87.5, 90, 100, 95.7, 78.3}; // deklarasi array bertipe float dengan banyak 5 elemen
    cout << "Nilai : ";

    for ( int i = 0 ; i< nilai.size(); i++){ // akan menampilkan isi dari data array nilai bertipe data float sebanyak 5 elemen
        cout << nilai[i] << " ";
    }
    for (float n : nilai){                   //sama saja, hanya lebih simple, dianya menggunakan n sebagai perantara array nilai 
        cout << n << " ";
    }
}
