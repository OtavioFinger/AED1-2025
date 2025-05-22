
#include <stdio.h>
#include <stdlib.h>

int* runningSum(int* nums, int numsSize, int* returnSize);

int main() {

int nums[] = {1,2,3,4};
int numsSize = 4;
int tamanhoVetor;

int* resultado = runningSum( nums, numsSize, &tamanhoVetor );

    for( int i = 0; i < tamanhoVetor; i++ )
    printf(" %d ", resultado[i] );
    
    free(resultado);

    return 0;
}

int* runningSum(int* nums, int numsSize, int* returnSize) {
    int *array;
    

    array = (int *)malloc(numsSize * sizeof(int));
    array[0] = nums[0];

        for( int i = 1; i < numsSize; i++){
            array[i] = array[i-1] + nums[i];
           
        }
    *returnSize = numsSize;
    return array;
    free(array);
}