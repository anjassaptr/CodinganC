#include <iostream>
using namespace std;

// Prototipe fungsi yang bakal digunain nanti
int getMax(int a, int b);
int getMin(int a, int b);
int getOdd(int a, int b);
int getEven(int a, int b);

int main() {
    int x, y;
    cout << "Masukkan dua angka: ";
    cin >> x >> y;

    cout << "\nNilai maksimum : " << getMax(x, y);
    cout << "\nNilai minimum  : " << getMin(x, y);
    cout << "\nBilangan ganjil: " << getOdd(x, y);
    cout << "\nBilangan genap : " << getEven(x, y);
    cout << endl;

    return 0;
}

// Implementasi fungsi
int getMax(int a, int b) {
    return (a > b) ? a : b;
}

int getMin(int a, int b) {
    return (a < b) ? a : b;
}

int getOdd(int a, int b) {
    if (a % 2 != 0) return a;
    else if (b % 2 != 0) return b;
    else return 0; // Kalau ngga ada yang ganjil
}

int getEven(int a, int b) {
    if (a % 2 == 0) return a;
    else if (b % 2 == 0) return b;
    else return 0; // Kalau ngga ada yang genap
}
