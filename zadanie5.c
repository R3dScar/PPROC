#include <stdio.h>

int main()
{
    int n;
    printf("Podaj liczbe: \n");
    scanf("%i", &n);

    if(n<=0)
    {
        printf("Nie prawidlowe dane");
        return 1;
    }

    int a=1, b=n/a;
    for(int i=1; i<=n; i++)
    {
        if(n % i ==0)
        {
         printf("%5i", i);
        }

    }
  
  return 0;
}