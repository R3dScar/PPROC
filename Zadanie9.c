#include <stdio.h>
#include <math.h>

double dzialanie (double c, double E)
{
    if(c<0)
    {
        printf("Liczba musi byc dodatnia");        
        return 1;

    }
    double x0= 1.0;
    double x=(x0+c/x0)/2.0;

    while(fabs(x - x0) >= E)
    {
        x=x0;
        x=(x0+c/x0)/2.0;

    }
    return x;
}


int main()
{   
    double c, E;
    printf("Podaj liczbe c: \n");
    scanf("%lf", &c);
    printf("Podaj z jaka dokladnoscia: \n");
    scanf("%lf", &E);

    double wynik = dzialanie(c, E);
    printf("Pierwiastek kwadratowy z %.5f z dokladnoscia %.5f wynosi %.10f :\n", c, E, wynik);
    return 0;

    

}