#include <iostream>
using namespace std;

void transpose(int A[][3], int B[][4], int rA, int cA) {
  for (int i=0;i<rA;i++)
    for (int j=0;j<cA;j++)
      B[j][i] = A[i][j];
}

int main() {
  const int rA = 4, cA = 3;
  int A[rA][cA] = {
    {34,78,12},
    {72,19,44},
    {14,92,77},
    {64,90,34}
  };

  int B[cA][rA];

  transpose(A,B,rA,cA);

  cout << "Matriks B = Transpose(A):\n";
  for (int i=0;i<cA;i++){
    for(int j=0;j<rA;j++) cout << B[i][j] << "";
    cout << '\n';
  }
  return 0;
}