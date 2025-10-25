#include <iostream>
using namespace std;

//Program Penjumlahan Matriks

void tambahMatriks(int A[][3], int B[][3], int C[][3], int r, int c) { //fungsi untuk menjumlahkan dua matriks A dan B, hasilnya disimpan di matriks C
    for (int i=0;i<r;i++) //looping untuk baris
        for (int j=0;j<c;j++) //looping untuk kolom
            C[i][j] = A[i][j] + B[i][j]; //menjumlahkan elemen-elemen matriks A dan B dan menyimpannya di matriks C
}

//program utama
int main() {
    const int R = 2, Cc = 3; //jumlah baris dan kolom matriks bisa diubah sesuai kebutuhan
    int A[R][Cc] = {{1,2,3},{4,5,6}}; //inisialisasi matriks A bisa diubah sesuai kebutuhan
    int B[R][Cc] = {{6,5,4},{3,2,1}}; //inisialisasi matriks B bisa diubah sesuai kebutuhan
    int C[R][Cc]; //deklarasi matriks C untuk menyimpan hasil penjumlahan

    tambahMatriks(A,B,C,R,Cc); //memanggil fungsi untuk menjumlahkan matriks A dan B

    cout << "Matriks C (A + B):\n"; // untuk menampilkan hasil penjumlahan matriks C
    for (int i=0;i<R;i++){ //looping untuk baris
        for (int j=0;j<Cc;j++) cout << C[i][j] << " "; //looping untuk kolom dan menampilkan elemen-elemen matriks C
        cout << '\n';
    }
    return 0;
}
