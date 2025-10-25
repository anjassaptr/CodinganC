// file: soal5_2_soal2.cpp
#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14159265; // variabel global konstanta buat nilai pi

int main() {
    double r;
    cout << "Masukkan jari-jari (r): "; // input luas dan keliling lingkaran jari jari r
    cin >> r; // untuk membaca nilai r dari user
    double luas = PI * r * r; // untuk menghitung luas lingkaran
    double keliling = 2 * PI * r; // untuk menghitung keliling lingkaran
    cout << fixed << setprecision(4); // mengatur output agar memiliki 4 angka di belakang koma
    cout << "Luas = " << luas << endl; // menampilkan hasil luas
    cout << "Keliling = " << keliling << endl; // menampilkan hasil keliling
    return 0;
}
