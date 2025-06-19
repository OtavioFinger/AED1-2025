
#include <stdio.h>
#include <stdlib.h>

char** fizzBuzz(int n, int* returnSize);

int main() {

    return 0;
}
char** fizzBuzz(int n, int* returnSize) {
    
    char** answer = (char **)malloc(n * sizeof(char*)); 
    *returnSize = n;
    
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0)
            answer[i - 1] = "FizzBuzz";
        else if (i % 3 == 0)
            answer[i - 1] = "Fizz";
        else if (i % 5 == 0)
            answer[i - 1] = "Buzz";
        else {
            answer[i - 1] = malloc(12);
            sprintf(answer[i - 1], "%d", i );
        }
    }
    return answer;

}