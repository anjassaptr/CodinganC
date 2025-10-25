#include <iostream>
using namespace std;
int main() {
    int *P;
    int A[5]={2,1,7,0,5};
    P=A;
    cout<<"Soal C1 - "<<*P<<endl;
    P++;
    cout<<"Soal C1 - "<<*P<<endl;
    return 0;
}