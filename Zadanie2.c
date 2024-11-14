#include <stdio.h>



int main() {
    int n;
    long long int a = 0, b = 1, next;

    printf("Wpisz liczbe: ");
    scanf("%d", &n);

    if (n <= 0)
     {
        printf("Nie prawidlowe dane.\n");
        return 1;
     }

    printf("Ciag Fibonacciego: ");

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

 
