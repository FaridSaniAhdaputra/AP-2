#include <iostream>  //header untuk c++        
using namespace std; // menggunakan namespace std agar tidak perlu menulis std:: sebelum fungsi cout, cin, dll

int main() // Fungsi utama atau tempat isi kodingan
{
    int a,b; // variabel a dan b dengan tipe data integer
    
    system("cls");  //unutk membersihkan layar konsol pada windows

    //Assainment Operator 
    a = 3; // memberi nilai 3 pada variabel a
    b =5;  // memberi nilai 5 pada variabel b


     // Aritmatika Operator (operator yang ada dalam matematika)
    // int tambah  = a + b;        //penjumlahan nilai a dan b pada variabel tambah bertipe data integer
    // int kurang  = a - b;        //pengurangan nilai a dan b pada variabel kurang bertipe data integer
    // int kali  = a * b;          //perkalian nilai a dan b pada variabel kali bertipedata integer
    // float bagi  = (float)a / b; // tipe casting  : berguna unutk tipe data dari sebuah variabel
    // int modulo = a % b;         // untuk menghasilkan sisa bagi antara pembagian a bagi b

    // cout << "Hasil penjumlahan =  " << tambah  << endl;      // menampilkan hasil variabel tambah
    // cout << "Hasil pengurangan =  "  << kurang  << endl;     // menampilkan hasil variabel kurang
    // cout << "Hasil perkalian =  "  << kali  << endl;         // menampilkan hasil variabel kali
    // cout << "Hasil pembagian =  "  << bagi  << endl;         // menampilkan hasil variabel bagi
    // cout << "Hasil sisa bagi =  "  << modulo  << endl;       //menampilkan hasil variabel modulo

    //relational operator (membandingkan dua nilai dan menghasilkan nilai boolean (false or true))
    // cout << (a==b) << endl; //sama dengan                 (false karena a tidak sama dengan b)
    // cout << (a<b) << endl; //kurang dari                  ( true karena a = 3 dan b = 5)
    // cout << (a<=b) << endl; //kurang dari sama dengan     (true karena a= 3 dan b = 5)
    // cout << (a>b) << endl; //lebih dari                   (false karena a = 3 dan b = 5)
    // cout << (a>=b) << endl; //lebih dari sama dengan      ( false karena a = 3 dan b = 5)
    // cout << (a!=b) << endl; //tidak sama dengan           (true karena a tidak sama dengan b)

    //logical operator (&&, ||, !)

    // && akan bernilai true apabila kedua nilai kebenarannya true, selain dari pada itu maka false
    // cout << (true && true) << endl;    //true
    // cout << (true && false) << endl;   //false
    // cout << (false && true) << endl;   //false
    // cout << (false && false) << endl;  //false
    
    // || bernilai false apabila kedua nilai kebenarannya false, selain dari itu true
    // cout << (true || true) << endl;     //true
    // cout << (true || false) << endl;    //true
    // cout << (false || true) << endl;    //true
    // cout << (false || false) << endl;   //false

    // ! merupakan kebalikan dari suatu nilai kebenaran
    // cout << !true << endl;               //false
    // cout << !false << endl;              //true

   // bitwise operator (&, |, ^, ~, >>, <<  ) --> operasi biner
    // cout << (5&7) << endl;    //bitwise and
    // cout << (5|7) << endl;    //bitwise or
    // cout << (5^7) << endl;    //bitwise xor
    // cout << (~7) << endl;     //bitwise not
    // cout << (7 << 2) << endl; //bitwise left shift
    // cout << (7 >> 2) << endl; //bitwise right shift

    //shorthand operator
    // a += 7; // a = a + 7 
    // cout << a << endl;         // menampilkan hasil a dari penjumlahan

    // a -= 7; // a = a - 7
    // cout << a << endl;         // menampilkan hasil a dari pengurangan

    // a *= 7; // a = a * 7
    // cout << a << endl;         // menampilkan hasil a dari perkalian


    // a /= 7; // a = a / 7
    // cout << a << endl;         // menampilkan hasil a dari pembagian


    //increment dan decrement
    //pre increment (meningkatkan nilai variabel sebelum digunakan)
    // cout << a << endl;       // menampilkan nilai awal a
    // cout << ++a << endl;     // menampilkan nilai a yang sudah ditambahkan

    // cout << b << endl;       // menampilkan nilai awal b
    // cout << ++b << endl;     // menampilkan nilai b yang sudah ditambahkan

    //post increment (meningkatkan nilai variabel setelah digunakan)
    // cout << a << endl;       // menampilkan nilai awal a
    // cout << a++ << endl;     // menampilkan nilai a yang belum ditambahkan
    // cout << a << endl;       // menampilkan nilai a yang sudah ditambahkan

    // cout << b << endl;       // menampilkan nilai awal b
    // cout << b++ << endl;     // menampilkan nilai b yang belum ditambahkan
    // cout << b << endl;       // menampilkan nilai b yang sudah ditambahkan

    // //pre decrement (mengurangi nilai variabel sebelum digunakan)
    // cout << a << endl;       // menampilkan nilai awal a
    // cout << --a << endl;     // menampilkan nilai a yang sudah dikurangi

    //  cout << b << endl;      // menampilkan nilai awal b
    //  cout << --b << endl;    // menampilkan nilai b yang sudah dikurangi

    //post decrement ( mengurangi nilai variabel setelah digunakan)
    cout << a << endl;          // menampilkan nilai awal a
    cout << a-- << endl;        // menampilkan nilai a yang belum dikurangi
    cout << a << endl;          // menampilkan nilai a yang sudah dikurangi

    cout << b << endl;          // menampilkan nilai awal b
    cout << b-- << endl;        // menampilkan nilai b yang belum dikurangi
    cout << b << endl;          // menampilkan nilai b yang sudah dikurangi

return 0;                       // mengembalikan nilai 0 menandakan program telah selesai dengan sukses
}                               