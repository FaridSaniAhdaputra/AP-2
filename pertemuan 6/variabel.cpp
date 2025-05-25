#include <iostream>     // header untuk C++
using namespace std;    // menggunakan namespace std agar tidak perlu menulis std:: sebelum fungsi cout, cin, dll

string namaGlobal = "Ilmu ";        // variabel global => bisa diakses di seluruh program

void namaVariabel (){
    string namalokal = "komputer";  // variabel lokal => hanya bisa diakses di dalam fungsi

    // coba Akses 
    cout << namaGlobal << endl;

     // coba akses
    cout << namaGlobal << endl;
}

int main( ) {
    // variabel lokal dan global
    namaVariabel( );

    //coba akses 
    cout << namaGlobal << endl;

    // coba akses
    // cout << namalokal << endl; // ora iso 

}