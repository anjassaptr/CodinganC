#include <iostream>
#include <cstring> // untuk strcpy, strcmp, strlen, strcat
using namespace std;

int main() {
    char str1[50], str2[50], hasil[100];

    cout << "Masukkan string pertama : ";
    cin.getline(str1, 50);
    cout << "Masukkan string kedua   : ";
    cin.getline(str2, 50);

    // strcpy: salin str1 ke hasil
    strcpy(hasil, str1);
    cout << "\nHasil strcpy  : " << hasil;

    // strcat: gabungkan str2 ke hasil
    strcat(hasil, str2);
    cout << "\nHasil strcat  : " << hasil;

    // strcmp: bandingkan dua string
    int banding = strcmp(str1, str2);
    if (banding == 0)
        cout << "\nHasil strcmp  : Kedua string sama";
    else if (banding < 0)
        cout << "\nHasil strcmp  : String pertama < string kedua";
    else
        cout << "\nHasil strcmp  : String pertama > string kedua";

    // strlen: panjang string pertama
    cout << "\nPanjang string pertama : " << strlen(str1) << " karakter" << endl;

    return 0;
}
