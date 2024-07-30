#include <stdio.h>

int fibonacci(int n);

int main() {
    int n, i;
    printf("Enter the number of terms in the Fibonacci series:\n");
    scanf("%d", &n);

    printf("Fibonacci series:\n");
    for (i = 0; i < n; i++) {
        printf("%d", fibonacci(i));
        printf("\n");
    }
    
    return 0;
}

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
