// Soal2_find_char.cpp
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char kalimat[200];
    cout << "Masukkan kalimat: ";
    cin.ignore();               
    cin.getline(kalimat, 200);

    char cari;
    cout << "Masukkan karakter yang dicari: ";
    cin >> cari;

    char *p = kalimat;
    int idx = 0;
    bool found = false;
    while (*p) {
        if (*p == cari) {
            cout << "Huruf yang dicari ada di posisi " << idx << endl;
            found = true;
            break;
        }
        p++;
        idx++;
    }

    if (!found) cout << "Huruf tidak ada dalam kalimat" << endl;

    return 0;
}
