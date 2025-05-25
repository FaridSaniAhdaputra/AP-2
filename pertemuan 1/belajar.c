#include <stdio.h>                                     // header untuk program C
#include <conio.h>                                     //Header untuk fungsi getch(), digunakan untuk menunggu input karakter

int main() {                                           // Fungsi utama atau tempat isi kodingan
    char nama[50];                                     // Deklarasi array karakter untuk menyimpan nama 
    int nim;                                           // Deklarasi variabel integer untuk menyimpan NIM
    char kom[2];                                       // Deklarasi array karakter untuk menyimpan kom 
    float ip;                                          // Deklarasi variabel float untuk menyimpan IP

    printf("Hello World\n");                           // printf : fungsi keluaran pada c++, Menampilkan "Hello World" di layar

    printf("Masukkan nama : ");                        // Menampilkan pesan untuk memasukkan nama
    gets(nama);                                        // fungsi masukan pada C, digunakan untuk membaca string dari input              

    printf("Masukkan nim : ");                         // Menampilkan pesan untuk memasukkan NIM
    scanf("%d", &nim);                                 // Membaca input NIM dari pengguna

    getchar();                                         // Mengambil karakter newline yang tersisa di buffer setelah scanf

    printf("Masukkan kom : ");                         // Menampilkan pesan untuk memasukkan kom
    gets(kom);                                         // Membaca input kom dari pengguna

    printf("Masukkan ip : ");
    scanf("%f", &ip); 

    /* Untuk  bagian Outputnya */
    printf("Nama : ");                                 // Menampilkan pesan "Nama : "
    puts(nama);                                        // put string, digunakan untuk string dalam bentuk array char

    printf("NIM : %d\n", nim);                         // Menampilkan NIM yang telah dimasukkan

    printf("KOM : ");                                  // Menampilkan pesan "KOM : "
    puts(kom);                                         // Menampilkan kom yang telah dimasukkan
    printf("IP : %f\n", ip);                           // Menampilkan IP yang telah dimasukkan

    printf("press any button to continue...");         // Menampilkan pesan untuk menekan tombol apa saja untuk melanjutkan
    getch();                                           // membaca satu karakter dari keyboard tanpa menampilkan ke layar

}                                                      // Akhir dari fungsi utama