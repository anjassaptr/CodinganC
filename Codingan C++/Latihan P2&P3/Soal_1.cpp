// Soal1_count_chars.cpp
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char kalimat[] = "Jl. Perdangangan 1 no 20A"; // bisa diganti
    char *p = kalimat;
    int lower = 0, upper = 0, digits = 0, other = 0;
    int total = 0;

    while (*p) {
        char ch = *p;
        if (ch >= 'a' && ch <= 'z') lower++;
        else if (ch >= 'A' && ch <= 'Z') upper++;
        else if (ch >= '0' && ch <= '9') digits++;
        else other++;
        total++;
        p++;
    }

    cout << "Jumlah Huruf Kecil = " << lower << endl;
    cout << "Jumlah Huruf Besar = " << upper << endl;
    cout << "Jumlah Angka       = " << digits << endl;
    cout << "Jumlah Selainnya   = " << other << endl;
    cout << "Total              = " << total << endl;

    return 0;
}
