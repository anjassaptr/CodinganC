#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char kalimat[300];
    cout << "Masukkan kalimat: ";
    cin.ignore();
    cin.getline(kalimat, 300);

    int startPos, endPos;
    cout << "Masukkan posisi awal (index 0-based): ";
    cin >> startPos;
    cout << "Masukkan posisi akhir  (index 0-based): ";
    cin >> endPos;

    int len = strlen(kalimat);
    if (startPos < 0 || endPos < 0 || startPos >= len || endPos >= len || startPos > endPos) {
        cout << "Posisi tidak valid. Indeks harus antara 0 dan " << len-1 << " dan start<=end." << endl;
        return 0;
    }

    char *p = kalimat + startPos;
    for (int i = startPos; i <= endPos; ++i) {
        *p = 'X';
        p++;
    }

    cout << "Hasil: " << kalimat << endl;
    return 0;
}
