#include <stdio.h>
#include <stdlib.h>

#define MOD 1000000007
#define MAX 1001

// Tabela de combinações (Triângulo de Pascal)
long long combTable[MAX][MAX];

// Pré-calcula C(n, k) usando Triângulo de Pascal
void BuildCombTable(int n) {
    for ( int i = 0; i <= n; i++)  {
        combTable[i][0] = combTable[i][i] = 1;
        for ( int j = 1; j < i; j++ ) {
            combTable[i][j] = (combTable[i-1][j-1] + combTable[i-1][j]) % MOD;
        }
    }
}

// Função recursiva principal
long long dfs( int *nums, int size ) {
    if ( size <= 2 ) 
        return 1;  // Casos base: BSTs com 2 ou menos elementos não mudam de estrutura

    int root = nums[0];
    int left[MAX], right[MAX];
    int l = 0, r = 0;

    // Divide em subárvore esquerda e direita
    for (int i = 1; i < size; i++) {
        if ( nums[i] < root ) {
            left[l++] = nums[i];
        }
        else {
            right[r++] = nums[i];
        }
    }

    long long leftWays = dfs(left, l);
    long long rightWays = dfs(right, r);

    long long mergeWays = combTable[l + r][l];  // Intercalar mantendo ordem relativa

    return mergeWays * leftWays % MOD * rightWays % MOD;
}


int numOfWays(int* nums, int numsSize) {
    BuildCombTable(numsSize);  // Prepara combinações C(n, k)
    long long total = dfs(nums, numsSize);
    return (total - 1 + MOD) % MOD;  // Subtrai a sequência original
}

int main() {
    int nums[] = {3, 4, 5, 1, 2};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int result = numOfWays(nums, numsSize);

    printf("Número de permutações que geram a mesma BST: %d\n", result);

    return 0;
}
