#include <iostream>;
using namespace std;

int main()
{
    float luas, p, l;

    system("cls");

    cout << "Masukkan panjang: ";
    cin >>  p;

    cout << "Masukkan lebar: ";
    cin >> l;

    luas = p * l;
    cout << "Luas : " << luas << endl;

    return 0;
}