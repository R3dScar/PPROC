#include <stdio.h>



int main() {
    int n;
    long long int a = 0, b = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
     {
        printf("Number of terms must be positive.\n");
        return 1;
     }

    printf("Fibonacci Sequence: ");

    for (int i = 1; i <= n; i++)
     {
        printf("%lld ", a);
        next = a + b;
        a = b;
        b = next;
     }

    printf("\n");
    return 0;
}

 
