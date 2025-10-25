#include <iostream>
using namespace std;

void printGenapDesc(int n) {
    if (n <= 0) return;
    cout << 2*n;
    if (n > 1) cout << " ";
    printGenapDesc(n-1);
}

int main() {
    int jumlah;
    cout << "Masukkan jumlah bilangan genap: ";
    cin >> jumlah;
    cout << jumlah << " bilangan genap: ";
    printGenapDesc(jumlah);
    cout << endl;
    return 0;
}
