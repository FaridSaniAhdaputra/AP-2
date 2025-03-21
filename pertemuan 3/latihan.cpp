#include <iostream>
using namespace std;

int main() {
    int bil;
    cout << "Masukkan bilangan bulat: ";
    cin >> bil;

    // Cek kelipatan
    if (bil % 10 == 0) {
        cout << bil << " adalah kelipatan dari 10." << endl;
    } else if (bil % 5 == 0) {
        cout << bil << " adalah kelipatan dari 5." << endl;
    } else {
        cout << bil << " bukan kelipatan dari 5 maupun 10." << endl;
    }

    return 0;
}