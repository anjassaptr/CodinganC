#include <iostream>
using namespace std;

void tukar(int &a, int &b) { // parameter keluaran dengan menggunakan reference
    int temp = a; //untuk menyimpan nilai a sementara
    a = b; //untuk menukar nilai a dengan b
    b = temp; //untuk mengembalikan nilai b dengan nilai a yang disimpan sementara
}

int main() {
    int x = 10, y = 20; // contoh nilai awal dan bisa diubah sesuai kebutuhan
    cout << "Sebelum: x = " << x << ", y = " << y << endl; // menampilkan nilai sebelum ditukar
    tukar(x, y); // memanggil fungsi tukar untuk menukar nilai x dan y
    cout << "Setelah : x = " << x << ", y = " << y << endl; // menampilkan nilai setelah ditukar
    return 0;
}