#include <iostream>
#include "iomanip"
using namespace std;

void enter_matrix(int array[][4]) {
  int n;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> n;
      array[i][j] = n;
    }
  }
}

void output_matrix(int array1[][4], int array2[][4]) {
  int count =1;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cout << array1[i][j]
           << array2[i][j];
    }
    cout << endl;
  }
}
bool compare_matrix(int array1[][4], int array2[][4]) {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (array1[i][j] != array2[i][j]) {
        cout << "The matrices are not equal!" << endl;
        return false;
      }
    }
  }
  return true;
}
int main() {

  int a[4][4];
  int b[4][4];
  cout << "Fill in the matrix < 1 >" << endl;
  enter_matrix(a);
  cout << "Fill in the matrix < 2 >" << endl;
  enter_matrix(b);
  cout << "Compare value the matrices..." << endl;
  if (compare_matrix(a, b)) {
    cout << "Matrices are equal" << endl;
  }
  output_matrix(a, b);
}
