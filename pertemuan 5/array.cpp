#include <iostream>
#include <string>
#include <array>
using namespace std;

int main( ) 
{
    //array Declaration & inisialisasi
    /*2 cara membuat array*/

    //cara 1 : array kosong
    // string nama [5];

    // nama [0] = "alya";
    // nama [1] = "farid";
    // nama [2] = "Ariel";
    // nama [3] = "Haqi";
    // nama [4] = "Imam";

    //cara 2 : array langsung diisi 
    // string nama2 [5] = {"alya", "farid", "Ariel", "Haqi", "Imam"};
    // string nama2 [5] = {"alya", "farid", "Ariel", "Haqi", "Imam"};
    
    //Assending Element in Array 
    // cout << nama [0] << endl;
    // cout << nama [1] << endl;
    // cout << nama [2] << endl;
    // cout << nama [3] << endl;
    // cout << nama [4] << endl;

    // menggunaka looping 
    // for (int i = 0; i < 5; i++){
    //     cout << nama [i] << endl;
    // }

    // Descending Element in Array use looping
    // for (int i = 4; i >= 0; i--){
    //     cout << nama [i] << endl;
    // }



    //Array multidimensi
    //baris 1 = 1,2,3
    //baris 2 = 4,5,6

    // int matriks [2][3] = { {1, 2, 3}, {4, 5, 6} };
    // for  (int i = 0; i<2; i++ ) {
    //     for (int j=0; j<3; j++){
    //         cout << matriks [i][i] << " ";
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



    //string (array of karakter) 
    // string nama = "Farid";
    // cout << nama[0] << endl;
    // cout << nama[2] << endl;

    // for (int i = 0; i < nama.length(); i++){
    //     cout << nama[i] << endl;
    // }

    // string s1 = "Hello ";
    // string s2 = "World!";

    /*1 .s1 = s2*/
    // s1 = s2;
    // cout << "s1 = " << s1 << endl;

    /*2. s1 = s1 + s2*/
    // s1 = "Hello ";  //reset nilai di s1
    // cout << "hasil : " << s1 + s2 << endl; //s1 + s2 = Hello World!

    /*3. s1. legnght*/
    // cout << s1.length() << endl;
    // cout << (s1 +s2 ).length() << endl; 

    /* 4. s1.substr (n,m)*/ 
    // cout << s1.substr(2, 3) << endl; 
    // cout << (s1 + s2).substr(5, 3) << endl;


    // operator sizeof
    // int angka = 10;
    // cout << sizeof(angka) << endl; //4 byte

    // int nilai [] = {10, 20, 30, 40, 50};
    // cout << sizeof(nilai) << endl; //20 byte

    // string s = "Farid";
    // cout <<sizeof(s) << endl;


    //Array Library
    array<float, 5> nilai = {87.5, 90, 100, 95.7, 78.3};
    cout << "nilai : ";

    for ( int i = 0 ; i< nilai.size(); i++){
        cout << nilai[i] << " ";
    }
    for (float n : nilai){
        cout << n << " ";
    }
}
