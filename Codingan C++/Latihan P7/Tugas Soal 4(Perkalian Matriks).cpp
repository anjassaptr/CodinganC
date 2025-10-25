#include <iostream>
using namespace std;

void kaliMatriks(int A[][3], int B[][4], int C[][4], int rA, int cA, int cB) {
    for (int i=0;i<rA;i++) {
        for (int j=0;j<cB;j++) {
            C[i][j] = 0;
            for (int k=0;k<cA;k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
}

int main() {
  const int rA = 2, cA = 3, cB = 4;
  int A[rA][cA] = {{4,8,2},{2,9,4}};
  int B[cA][cB] = {
    {3,2,4,5},
    {8,7,7,1},
    {2,5,9,3}
  };
  int C[rA][cB];

  kaliMatriks(A,B,C,rA,cA,cB);

  cout << "Hasil Perkalian C:\n";
  for (int i=0;i<rA;i++){
    for (int j=0;j<cB;j++) cout << C[i][j] << " ";
    cout << '\n';
  }
  return 0;
}