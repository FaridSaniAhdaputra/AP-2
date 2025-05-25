#include <iostream>                                                     //header pada c++
using namespace std;                                                    //menggunakan namespace std agar tidak perlu menulis std:: sebelum fungsi cout, cin, dll

int main() {                                                            //Fungsi utama atau tempat isi kodingan
    int bil;
    cout << "Masukkan bilangan bulat: ";
    cin >> bil;

    // Cek kelipatan
    if (bil % 10 == 0) {                                                //jika bilangan merupakan kelipaatan 10 
        cout << bil << " adalah kelipatan dari 10." << endl;            // jika iya maka akan menampilkan bahwa bilangan tersebut adalah kelipatan dari 10
    } else if (bil % 5 == 0) {                                          //jika bilangan tidak habis dibagi 10, tapi habis dibagi 5      
        cout << bil << " adalah kelipatan dari 5." << endl;             // jika iya maka akan menampilkan bahwa bilangan tersebut adalah kelipatan dari 5
    } else {                                                            //jika bilangan tidak habis dibagi 10 maupun 5  
        cout << bil << " bukan kelipatan dari 5 maupun 10." << endl;    // jika tidak maka akan menampilkan bahwa bilangan tersebut bukan kelipatan dari 5 maupun 10
    }

    return 0;                                                           // Mengembalikan nilai 0 menandakan program telah selesai dengan sukses
}   