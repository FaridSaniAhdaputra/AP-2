#include <iostream>                     // header untuk C++
using namespace std;                    // menggunakan namespace std agar tidak perlu menulis std:: sebelum fungsi cout, cin, dll

int main(){                             // Fungsi utama atau tempat isi kodingan
    cout << "==========================\n";
    cout << "=====Operator Kondisi=====\n";
    cout << "==========================\n";

    int nilai;
    system("cls");                      // untuk membersihkan layar konsol pada windows
    cout << "Masukkan Nilai : ";        // meminta pengguna untuk memasukkan nilai
    cin >> nilai;                       // membaca input nilai dari pengguna

    // if statement                         // digunakan untuk mengecek 1 kondisi
    // if (nilai <= 65){                    // jika nilai kurang dari atau sama dengan 65
    //     cout << "Anda Tidak Lulus!\n";   // menampilkan pesan bahwa pengguna tidak lulus
    // }else {                              // jika nilai lebih dari 65
    //     cout << "Anda Lulus!\n";         // menampilkan pesan bahwa pengguna lulus
    // }

    // if else statement                   // digunakan untuk mengecek 2 kondisi
    // if(nilai == 100){                   // jika nilai sama dengan 100
    //     cout << "Anda Ketje!\n";        // menampilkan pesan bahwa pengguna hebat
    // }else if(nilai <= 65){              // jika nilai kurang dari atau sama dengan 65
    //     cout << "Anda Tidak Lulus!\n";  // menampilkan pesan bahwa pengguna tidak lulus
    // }else {                             // jika nilai lebih dari 65
    //     cout << "Anda Lulus!\n";        // menampilkan pesan bahwa anda lulus
    // }

    //nested if                             // digunakan untuk mengecek beberapa kondisi    
    // if (nilai <= 65){
    //     cout << "Anda Tidak Lulus" << endl; 
    // } else {
    //     if (nilai == 100) {
    //         cout << "Anda lulus dan anda hebat" << endl;
    //     } else {
    //         cout << "Anda Lulus" << endl;
    //     }
    // }

    // switch case                          // digunakan untuk mengecek beberapa kondisi yang sudah ditentukan 
    // switch (nilai) {
    //     case 1:
    //         cout << "senin" << endl;     //diakhir dengan break agar melanjutkan program yang berada di setelah switch case ini
    //         break;
    //     case 2:
    //         cout << "selasa" << endl;
    //         break;
    //     case 3:
    //         cout << "Rabu" << endl;
    //         break;
    //     case 4:
    //         cout << "kamis" << endl;
    //         break;
    //     case 5:
    //         cout << "Jumat" << endl;
    //         break;
    //     case 6:
    //         cout << "Sabtu" << endl;
    //         break;
    //     case 7:
    //         cout << "Minggu" << endl;
    //         break;
    //     default:                                      // selain dari pernyataan diatas
    //         cout << "inputan tidak valid" << endl;    // menampilkan pesan bahwa inputan tidak valid
    //         break;     
    // }
    
    // switch range                                     // digunakan untuk mengecek beberapa kondisi yang sudah ditentukan dalam rentang nilai
    // switch (nilai) {                                 
    //     case 85 ... 100: cout << "A" << endl; break; // nilai 85 sampai 100 diakhiri dengan break agar melanjutkan program yang berada di setelah switch case ini
    //     case 80 ... 84: cout << "B+" << endl; break; 
    //     case 75 ... 79: cout << "B" << endl; break;
    //     case 70 ... 74: cout << "c+" << endl; break;
    //     case 65 ... 69: cout << "c" << endl; break;
    //     case 60 ... 64: cout << "D" << endl; break;
    //     default: cout << "E" << endl; break;         // jika nilai tidak sesuai dengan kondisi maka akan masuk ke default
    // }
    
    // ternary operator                     // digunakan untuk mengecek 1 kondisi dengan cara singkat
    // if  (nilai % 2 == 0) {               
    //     cout << "Genap sih " << endl;
    // } else {
    //     cout << "Ganjil sih " << endl;
    // }

    // a > 5 ? 9 : 6                                                         // jika a lebih dari 5 maka hasilnya 9, jika tidak maka hasilnya 6      
    // string checknumber = (nilai % 2 == 0) ? "Genap" : "Ganjil";           // menggunakan operator ternary untuk mengecek apakah nilai genap atau ganjil
    // cout << nilai << " tuh bilangan " <<  checknumber <<" sih" << endl;   // menampilkan hasil apakah nilai genap atau ganjil

    return 0;                                                                // Mengembalikan nilai 0 menandakan program telah selesai dengan sukses 
}                                                                            // Akhir dari fungsi utama