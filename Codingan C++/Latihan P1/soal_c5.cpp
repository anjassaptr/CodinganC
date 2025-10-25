#include <iostream>
using namespace std;
int main() {
    int *P;
    int A[5]={2,1,7,0,5};
    P=A;
    cout<<"Soal C5 - "<<++*P<<endl;
    cout<<"Soal C5 - "<<*P<<endl;
    return 0;
}