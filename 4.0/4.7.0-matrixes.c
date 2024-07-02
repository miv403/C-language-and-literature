#include <stdio.h>

void matrixPrint(int matrix[][3], int const size);
void matrixSum(int arr0[][3], int arr1[][3], int  arr[][3], int );
int main(void) {


  int matrix0[3][3] = {{1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9}};

  int matrix1[3][3] = {{1,0,0},
                       {0,1,0},
                       {0,0,1}};

  // matrix0 + matrix1 = {2,2,3}
  //                     {4,6,6}
  //                     {7,8,10}
  
  int matrixS[3][3] = {{0}};
  
  matrixSum(matrix0, matrix1, matrixS, 3);
  matrixPrint(matrixS, 3);
  return 0;
}
  // matrix0 * matrix1 = {1,2,3}
  //                     {4,5,6}
  //                     {7,8,9}


void matrixSum(int matrix0[][3],
               int matrix1[][3],
               int matrixSum[][3],
               int size){
    
  for(size_t i = 0; i < size; ++i){
    for(size_t j = 0; j < size; ++j){
      
      matrixSum[i][j] = matrix0[i][j] + matrix1[i][j];

    }
  }
}

void matrixPrint(int matrix[][3], int const size) {

    for(size_t i = 0; i < size; ++i) {
      for(size_t j = 0; j < size; ++j) {
        
        printf("%d,", matrix[i][j]);
        
       }
      puts("");
  }

}

/*
void matrixSum(int matrix0[][3],
               int matrix1[][3],
               int matrixMult[][3],
               int size){
    
    for(size_t i = 0; i < size; ++i) { // m0's lines
      for(size_t j = 0; j < size; ++j) { // m1's columns
        
        matrixMult[i][j] = matrix0[i][j] * matrix1[][]


// {1,2} {1,2} = {7,10}
// {3,4} {3,4}   {15,22}
    }

  }

}
*/
