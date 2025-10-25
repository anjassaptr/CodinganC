#include <iostream>
#define PI 3.14159265 // Definisi konstanta PI
using namespace std;

// Prototipe fungsi yang bakal digunain nanti
double luas(double r);
double keliling(double r);
double diameter(double r);

int main() {
    double r;
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;

    cout << "\nLuas      = " << luas(r);
    cout << "\nKeliling  = " << keliling(r);
    cout << "\nDiameter  = " << diameter(r);
    cout << endl;

    return 0;
}

// Implementasi fungsi
double luas(double r) {
    return PI * r * r; // Menghitung luas lingkaran
}

double keliling(double r) {
    return 2 * PI * r; // Menghitung keliling lingkaran
}

double diameter(double r) {
    return 2 * r; // Menghitung diameter lingkaran
}
