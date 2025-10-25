#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void hitungKarakter() {
    cin.ignore();
    char kalimat[200];
    cout << "\nMasukkan kalimat : ";
    cin.getline(kalimat, 200);

    char *p = kalimat;
    int lower = 0, upper = 0, digit = 0, other = 0, total = 0;

    while (*p) {
        if (islower(*p)) lower++;
        else if (isupper(*p)) upper++;
        else if (isdigit(*p)) digit++;
        else other++;
        total++;
        p++;
    }

    cout << "\n=== HASIL PERHITUNGAN ===" << endl;
    cout << "Huruf kecil   : " << lower << endl;
    cout << "Huruf besar   : " << upper << endl;
    cout << "Angka         : " << digit << endl;
    cout << "Selainnya     : " << other << endl;
    cout << "Total karakter: " << total << endl;
}

void cariKarakter() {
    cin.ignore();
    char kalimat[200];
    cout << "\nMasukkan kalimat : ";
    cin.getline(kalimat, 200);

    char cari;
    cout << "Masukkan karakter yang dicari : ";
    cin >> cari;

    char *p = kalimat;
    int idx = 0;
    bool ketemu = false;

    while (*p) {
        if (*p == cari) {
            cout << "Huruf '" << cari << "' ada di posisi ke-" << idx << endl;
            ketemu = true;
            break;
        }
        p++;
        idx++;
    }

    if (!ketemu)
        cout << "Huruf '" << cari << "' tidak ada dalam kalimat." << endl;
}

void gantiKarakter() {
    cin.ignore();
    char kalimat[300];
    cout << "\nMasukkan kalimat : ";
    cin.getline(kalimat, 300);

    int awal, akhir;
    cout << "Masukkan posisi awal : ";
    cin >> awal;
    cout << "Masukkan posisi akhir : ";
    cin >> akhir;

    int len = strlen(kalimat);
    if (awal < 0 || akhir < 0 || awal >= len || akhir >= len || awal > akhir) {
        cout << "Posisi tidak valid!" << endl;
        return;
    }

    char *p = kalimat + awal;
    for (int i = awal; i <= akhir; i++) {
        *p = 'X';
        p++;
    }

    cout << "\nHasil setelah diganti : " << kalimat << endl;
}

int main() {
    int pilihan;
    do {
        cout << "\n=========================================";
        cout << "\n   PROGRAM POINTER DAN STRING (MENU)";
        cout << "\n       NAMA : ANJAS SAPUTRA";
        cout << "\n       NIM  : 24101140204";
        cout << "\n=========================================";
        cout << "\n1. Hitung jenis karakter dalam kalimat";
        cout << "\n2. Cari karakter dalam kalimat";
        cout << "\n3. Ganti sebagian huruf dengan 'X'";
        cout << "\n4. Keluar";
        cout << "\n=========================================";
        cout << "\nMasukkan pilihan Menu (1-4): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: hitungKarakter(); break;
            case 2: cariKarakter(); break;
            case 3: gantiKarakter(); break;
            case 4: cout << "\nTerima kasih!\n"; break;
            default: cout << "\nPilihan tidak valid.\n"; break;
        }

    } while (pilihan != 4);

    return 0;
}
