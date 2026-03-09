#include <stdio.h>
#include <stdlib.h>


int *multiply_matrix(int *matrix_one,int *matrix_two, int rows, int colums) {
    int *result = calloc(rows * colums, sizeof(int));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colums; j++) {
            for (int k = 0; k < colums; k++) {
                result[i * colums + j] += matrix_one[i * colums + k] * matrix_two[k * colums + j];
            }
        }
    }

    return result;
}

int main(void) {
    int row_one, colum_one, row_two, colum_two;
    
    printf("enter rows and clumms seperated by x: ");
    scanf("%dx%d", &row_one, &colum_one); 
    
    int array[row_one * colum_one];
    
    printf("Enter Matrix (seperate by spacebar): ");
    for (int i = 0; i < row_one * colum_one; i++) {
        scanf(" %d", &array[i]);
    }
    
    printf("Enter rows and colums (seperate by x): ");
    scanf("%dx%d", &row_two, &colum_two); 
    
    int m[row_two * colum_two];
    
    printf("enter second matrix (seperated by spacebar): ");
    for (int j = 0; j < row_two * colum_two; j++){
        scanf(" %d", &m[j]);
    }

    int *r = multiply_matrix(array, m, row_one, colum_two);
    printf("result: (%d, %d, %d,%d)", r[0], r[1], r[2], r[3]);

    free(r);

    return 0;
}