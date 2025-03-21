#include <iostream>
using namespace std;

int main(){
    cout << "==========================\n";
    cout << "=====Operator Kondisi=====\n";
    cout << "==========================\n";

    int nilai;
    cout << "Masukkan Nilai : ";
    cin >> nilai;

    // if (nilai <= 65){
    //     cout << "Anda Tidak Lulus!\n";
    // }else {
    //     cout << "Anda Lulus!\n";
    // }

    // if else if statement
    // if(nilai == 100){
    //     cout << "Anda Ketje!\n";
    // }else if(nilai <= 65){
    //     cout << "Anda Tidak Lulus!\n";
    // }else {
    //     cout << "Anda Lulus!\n";
    // }

    //nested if 
    // if (nilai <= 65){
    //     cout << "Anda Tidak Lulus" << endl; 
    // } else {
    //     if (nilai == 100) {
    //         cout << "Anda lulus dan anda hebat" << endl;
    //     } else {
    //         cout << "Anda Lulus" << endl;
    //     }
    // }

    // switch case 
    // switch (nilai) {
    //     case 1:
    //         cout << "senin" << endl;
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
    //     default: // selain dari pernyataan diatas
    //         cout << "inputan tidak valid" << endl;
    //         break;     
    // }
    
    // switch range 
    // switch (nilai) {
    //     case 85 ... 100: cout << "A" << endl; break;
    //     case 80 ... 84: cout << "B+" << endl; break;
    //     case 75 ... 79: cout << "B" << endl; break;
    //     case 70 ... 74: cout << "c+" << endl; break;
    //     case 65 ... 69: cout << "c" << endl; break;
    //     case 60 ... 64: cout << "D" << endl; break;
    //     default: cout << "E" << endl; break;
    // }
    
    // ternary operator
    // if  (nilai % 2 == 0) {
    //     cout << "Genap sih " << endl;
    // } else {
    //     cout << "Ganjil sih " << endl;
    // }

    // a > 5 ? 9 : 6
    // string checknumber = (nilai % 2 == 0) ? "Genap" : "Ganjil";
    // cout << nilai << " tuh bilangan " <<  checknumber <<" sih" << endl;

    return 0;
}