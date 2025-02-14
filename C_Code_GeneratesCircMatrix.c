#include <stdio.h>


void generate_circmatrix(int size) {

  int array2D[size][size];

  
  for (int i = 0; i < size; ++i) {
    int rotate = i;
    for (int j = 0; j < size; ++j) {4
      *(*(array2D + i) + j) = (i + j + rotate) % size + 1;
    }
  }

 
  printf("the matrix is:\n");
  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size; ++j) {
      printf("%d ", *(*(array2D + i) + j));
    }
    printf("\n");
  }
}


int main() {
  
  int size;

  
  printf("enter the size of the matrix: ");
  
  scanf("%d", &size);
  
  generate_circmatrix(size);

  return 0;
}
