#include <iostream>
using namespace std;
int main() {
    int *P;
    int A[5]={2,1,7,0,5};
    P=A;
    cout<<"Soal C2 - "<<*P++<<endl;
    cout<<"Soal C2 - "<<*P<<endl;
    return 0;
}