#include <iostream>
#include <iomanip>
using namespace std;

double BUNGA = 0.06; // variabel global bunga 6%  sesuaikan kebutuhan

void HitungBunga(const string akun[], const double saldo[], double saldoBaru[], int n) {
    for (int i = 0; i < n; ++i) {
        saldoBaru[i] = saldo[i] * (1.0 + BUNGA); //1.0 adalah untuk memastikan operasi floating point 
    }
}

int main() {
    const int N = 5; // jumlah akun bisa disesuaikan
    string akun[N] = {"A1001","A1002","A1003","A1004","A1005"}; // contoh data akun yang sesuai dengan jumlah N(jumlah akun pada N harus sama dengan jumlah data pada array lainnya)
    double saldo[N] = {1000000, 2500000, 500000, 750000, 1250000}; // contoh data saldo awal yang sesuai dengan jumlah N dan nominal saldo bisa disesuaikan
    double saldoBaru[N]; // array untuk menyimpan saldo setelah bunga

    HitungBunga(akun, saldo, saldoBaru, N); // memanggil fungsi untuk menghitung saldo baru dan menyimpannya di array saldoBaru

    cout << fixed << setprecision(2);
    cout << "Akun\tSaldo\t\tSaldo Setelah 1 Tahun (Bunga 6%)\n"; // ini judul kolom atau bisa dibilang header
    cout << "-----------------------------------------------------\n";
    for (int i = 0; i < N; ++i) {
        cout << akun[i] << "\t" << saldo[i] << "\t" << saldoBaru[i] << '\n'; // menampilkan data akun, saldo awal, dan saldo setelah bunga
    }
    return 0;
}
