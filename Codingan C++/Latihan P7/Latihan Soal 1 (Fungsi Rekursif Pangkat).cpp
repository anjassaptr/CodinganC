#include <iostream>
using namespace std;

long long pangkat(long long x, int y) {
    if (y == 0) return 1;
    if (y == 1) return x;
    return x * pangkat(x, y-1);
}

int main() {
    long long x;
    int y;
    cout << "Masukkan x dan y (x^y): ";
    cin >> x >> y;
    cout << x << " pangkat " << y << " adalah " << pangkat(x,y) << endl;
    return 0;
}
