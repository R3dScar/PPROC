#include <stdio.h>
#include <math.h>

double dzialanie (double c, double E, int n)
{
    if(c<0)
    {
        printf("Liczba musi byc dodatnia");        
        return 1;

    }
    int x0= 1.0;
    double x, r;
    do
    {
        x=((n-1)*x0+(c/(x0^(n-1)))/n);
        r=fabs(x-x0);
        x0=x;
    }
    while(r >= E);
    
    return x;
}


int main()
{   
    double c, E;
    int n;
    printf("Podaj liczbe c: \n");
    scanf("%lf", &c);
    printf("Podaj z jaka dokladnoscia: \n");
    scanf("%lf", &E);
    printf("Podaj wartosc n: \n");
    scanf("%lf", &n);

    float wynik = dzialanie(c, E, n);
    printf("Pierwiastek kwadratowy z %.5f z dokladnoscia %.5f wynosi %f :\n", c, E, wynik);
    return 0;

    

}