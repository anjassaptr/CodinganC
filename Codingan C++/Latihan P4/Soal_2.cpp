#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int jumlahMahaSiswa;
    const int jmlMapel = 3; // Jumlah mata pelajaran bisa diubah sesuai kebutuhan

    cout << "Masukkan jumlah siswa: ";
    cin >> jumlahMahaSiswa;

    // Alokasi memori dinamis 2D
    float **nilai = new float*[jumlahMahaSiswa];
    for (int i = 0; i < jumlahMahaSiswa; i++) {
        nilai[i] = new float[jmlMapel];
    }

    // Input nilai
    // disini mata pelajaran diubah sesuai kebutuhan
    for (int i = 0; i < jumlahMahaSiswa; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        cout << "Struktur Data : ";
        cin >> nilai[i][0];
        cout << "Sistem Berkas : ";
        cin >> nilai[i][1];
        cout << "Algoritmat dan pemrograman II : ";
        cin >> nilai[i][2];
    }

    // Tampilkan hasil dan hitung rata-rata
    cout << fixed << setprecision(2);
    cout << "\n=== DAFTAR NILAI MAHASISWA ===" << endl;
    cout << "No || Struktur Data || Sistem Berkas || Algoritmat dan pemrograman II  || Rata-rata" << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < jumlahMahaSiswa; i++) {
        float rata = (nilai[i][0] + nilai[i][1] + nilai[i][2]) / 3.0;
        cout << setw(2) << i + 1 << "   "
             << setw(7) << nilai[i][0] << "\t\t"
             << setw(9) << nilai[i][1] << "\t\t"
             << setw(10) << nilai[i][2] << "\t\t"
             << setw(9) << rata << endl;
    }

    for (int i = 0; i < jumlahMahaSiswa; i++) {
        delete[] nilai[i];
    }
    delete[] nilai;

    return 0;
}
