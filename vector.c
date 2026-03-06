#include <stdio.h>
#include <stdlib.h>


struct Vector {
    int a;
    int b;
    int flag;
};

struct VectorResult {
    int c;
    int d;
    int flag; 
};


int add_vectors(struct Vector *ptr_a, struct Vector *ptr_b, struct VectorResult *result) {
    result->c = ptr_a->a + ptr_b->a;
    result->d = ptr_a->b + ptr_b->b;
    
    if(!result->flag) {
        return 1; // something went wrong
    } 

    return 0;
};


int main(void) {
    struct VectorResult *result;
    struct Vector *vector_a = malloc(sizeof(struct Vector));
    struct Vector *vector_b = malloc(sizeof(struct Vector));
    
    vector_a->a = 2;
    vector_a->b = 3;
    vector_a->flag = 0;

    vector_b->a = 6,
    vector_b->b = 3,
    vector_b->flag = 0,

    add_vectors(vector_a, vector_b, result);

    printf("vector result is: %d, %d\n", result->c, result->d);
    free(vector_a);
    free(vector_b);

}