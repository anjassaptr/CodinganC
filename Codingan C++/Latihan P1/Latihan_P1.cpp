#include <iostream>
using namespace std;

int main() {
    cout << "===== Latihan Codingan Pertemuan 1 =====\n";

    {
        int panjang=25, lebar=11, A=10;
        int* pA;
        pA = &panjang;
        cout<<"Soal 1 - Nilai: "<<*pA<<endl;
        pA = &lebar;
        cout<<"Soal 1 - Nilai: "<<*pA<<endl;
        pA = &A;
        cout<<"Soal 1 - Nilai: "<<*pA<<endl;
        A = panjang * lebar;
        cout<<"Soal 1 - Nilai: "<<*pA<<endl;
    }

  
    cout << "\nSoal 2 - Error karena int* menunjuk ke double (tidak ditampilkan di kode).\n";

  
    cout << "Soal 3 - Error karena int* pA, pB; hanya pA yang pointer.\n";

    cout << "\n===== Latihan Array & Pointer =====\n";

    
    {
        int *P;
        int A[5]={2,1,7,0,5};
        P=A;
        cout<<"Soal C1 - "<<*P<<endl;
        P++;
        cout<<"Soal C1 - "<<*P<<endl;
    }

    
    {
        int *P;
        int A[5]={2,1,7,0,5};
        P=A;
        cout<<"Soal C2 - "<<*P++<<endl;
        cout<<"Soal C2 - "<<*P<<endl;
    }

    
    {
        int *P;
        int A[5]={2,1,7,0,5};
        P=A;
        cout<<"Soal C3 - "<<(*P)++<<endl;
        cout<<"Soal C3 - "<<*P<<endl;
    }


    {
        int *P;
        int A[5]={2,1,7,0,5};
        P=A;
        cout<<"Soal C4 - "<<*++P<<endl;
        cout<<"Soal C4 - "<<*P<<endl;
    }

    
    {
        int *P;
        int A[5]={2,1,7,0,5};
        P=A;
        cout<<"Soal C5 - "<<++*P<<endl;
        cout<<"Soal C5 - "<<*P<<endl;
    }

    return 0;
}
