#include <iostream>
using namespace std;

// fungsi penjumlahan biasa
void penjumlahan(int a, int b) {
    cout << a + b << endl;
}

// fungsi penjumlahan dengan pointer
void penjumlahanpointer(int *a , int *b) { // parameter formal yg berisi nilai dari variabel yg alamatnya dikirim dari parameter aktual
   *a += *b;                               // akan memanipulasi nilai variabel yg alamatnya ditunjuk oleh pointer
   cout << *a << endl;

}
int main() {                                
    system("cls");

    //pointer Deklarasi 
    int number = 35;
    int * pointer_number = &number;      // 'pointer_number' menunjuk ke alamat dari variabel 'number

    // cout << "isi variable number = " << number << endl;
    // cout << "alamat dari memori variabel number = " << &number << endl;
    // cout << "isi variabel pointer_number = " << pointer_number << endl;
    // cout << "isi variabel yang ditunjuk oleh variabel_number = " << *pointer_number << endl;
    // cout << "alamat memori variabel pointer_number = " << &pointer_number << endl;
    // cout << endl;


    //pointer operation
    // *pointer_number = 25; // mengubah isi dari pointer_number
    // cout << "isi variable number = " << number << endl;
    // cout << "alamat dari memori variabel number = " << &number << endl;
    // cout << "isi variabel pointer_number = " << pointer_number << endl;
    // cout << "isi variabel yang ditunjuk oleh variabel_number = " << *pointer_number << endl;
    // cout << "alamat memori variabel pointer_number = " << &pointer_number << endl;
    // cout << endl;


    //pointer in array (pointer dapat digunakan untuk menunjuk alamat atau index data dalam array)
    int num[] = {1, 2, 3, 4, 5};
    int *pointer_num = num; // pointer_num menunjuk ke elemen pertama dari array num
    // cout << "isi variable number = " << num [0] << endl;
    // cout << "alamat dari memori variabel num = " << &num [3] << endl;
    // cout << "isi variabel pointer_num = " << pointer_num << endl;
    // cout << "isi variabel yang ditunjuk oleh variabel_num = " << *pointer_num << endl; // Menunjuk nilai dari indeks ke-0
    // cout << "alamat memori variabel pointer_num = " << &pointer_num << endl;
    // cout << endl;

    // *pointer_num += 5;    // Selalu menujuk ke indeks ke-0, maka akan menambahkan 5 pada nilai di indeks ke-0
    // cout << "isi variable number = " << num [0] << endl;
    // cout << "alamat dari memori variabel num = " << &num [3] << endl;
    // cout << "isi variabel pointer_num = " << pointer_num << endl;
    // cout << "isi variabel yang ditunjuk oleh variabel_num = " << *pointer_num << endl;
    // cout << "alamat memori variabel pointer_num = " << &pointer_num << endl;
    // cout << endl;


    //pointer parameter
    // int num1 = 5;
    // int num2 = 7;
    // penjumlahan(num1, num2); // memanggil fungsi penjumlahan dengan parameter num1 dan num2
    // cout << num1 << endl;
    // cout << num2 << endl;
    // penjumlahanpointer(&num1, &num2); // memanggil fungsi penjumlahan dengan parameter num1 dan num2
    // cout << num1 << endl;
    // cout << num2 << endl;


    //pointer in pointer (pointer yang menunjuk alamat pointer lain)
    // int score = 4;
    // int *pointer_score = &score; // pointer_score menunjuk ke score
    // int **ptr_pointer_score = &pointer_score; // ptr_pointer_score menunjuk ke pointer_score
    // cout << "isi variable score = " << score << " dan Alamat memorinya = " << & score << endl;
    // cout << "isi variable pointer_score = " << pointer_score << " dan isi variabel yang ditunjuk oleh pointer_score = " << *pointer_score  << " alamat memori pointer_score = " << &pointer_score << endl;
    // cout << "isi variable ptr_pointer_score = " << pointer_score << " dan isi variabel yang ditunjuk oleh ptr_pointer_score = " << **ptr_pointer_score  << " alamat memori ptr_pointer_score = " << &ptr_pointer_score << endl;


    //dynamic pointer
    int *ptr = new int; // alokasi memori untuk satu integer
    *ptr = 30; // menyimpan nilai 30 ke dalam memori yang dialokasikan
    cout << "isi variable ptr = " << *ptr << " dan alamat  "<< &ptr <<endl;

    delete ptr; // membebaskan memori yang dialokasikan
    cout << "isi variable ptr = " << *ptr << " dan alamat  "<< &ptr <<endl;


}
// Pointer adalah variabel yang menyimpan alamat dari variabel lain // Alamat
// operator & menghasilkan alamat dari operandnya atau alamat memeory yang ditempati oleh variable 
// operator * mengahasilkan nilai yang berada pada sebuah alamat