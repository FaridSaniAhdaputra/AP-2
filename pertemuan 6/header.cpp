#include <iostream>         // header untuk C++
#include <cmath>            // untuk mengakses fungsi - fungsi matematika standar dalam C++        
#include "headercustom.h"   // untuk memanipulasi sintaks umum yang ada dalam bahasa C++  sesuai dengan keinginan user
u;                          // using namespace std dimanipulasi menjadi u

i j (int a, int b) {        //int dimanipulasi menjadi i, jumlah dimanipulasi menjadi j 
    r a + b;                //r dimanipulasi menjadi r, mengembalikan nilai hasil penjumlahan variabel a dan b
}

i k (int a, int b) {        //kurang dimanipulasi menjadi k,
    r a - b;                 //r dimanipulasi menjadi r, mengembalikan nilai hasil pengurangan variabel a dan b
}

i c (){                     //main dimanipulasi menjadi c
    system ("CLS");         //membersihkan layar konsol pada windows

    int n;
    o L j (2,3) << endl;    //cout dimanipulasi menjadi o, << dimanipulasi menjadi o, jumlah dimanipulasi menjadi j dan  memanggil fungsi jumlah sehingga mendapat nilai balikan 5
    o L k(2,3) << endl;     //memanggil fungsi kurang sehingga mendapat nilai balikan -1

    p angka = 25.0 ;        //doble dimanipulasi menjadi p 
    p akar = sqrt (angka);  // sqrt merupakan akar sehingga akar dari 25 yaitu 5
    o << "Akar kuadrat dari  " << angka << " adalah : " << akar << endl; // // menampilkan hasil akar kuadrat dari 25 yaitu 5

    r 0;                    // return dimanipulasi menjadi r
}