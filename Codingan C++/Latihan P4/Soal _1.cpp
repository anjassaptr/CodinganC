#include <iostream>
using namespace std;

int main() {
    int jumlah;
    cout << "Masukkan jumlah orang: ";
    cin >> jumlah;

    char **nama = new char*[jumlah];

    // Batas maksimal nama 30 karakter
    //kalau mau lebih bisa di ubah di bagian alokasi memori atau pada kolom char
    for (int i = 0; i < jumlah; i++) {
        nama[i] = new char[30]; //bagian alokasi memori yang bisa di ubah sesuai kebutuhan
    }

    cin.ignore();
    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan nama ke-" << i + 1 << ": ";
        cin.getline(nama[i], 30);
    }

    cout << "\n=== DAFTAR NAMA YANG DIMASUKKAN ===" << endl;
    for (int i = 0; i < jumlah; i++) {
        cout << i + 1 << ". " << nama[i] << endl;
    }

    for (int i = 0; i < jumlah; i++) {
        delete[] nama[i];
    }
    delete[] nama;

    return 0;
}
