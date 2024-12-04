#include <stdio.h>

double przy_pi(int x) {
    double pi = 0.0;
    for (int n = 0; n < x; n++) {
        
        pi += ((n % 2 == 0 ? 1 : -1) / (2.0 * n + 1));
    }
    return 4.0 * pi;  
}

int main() {
    int x;
    printf("Podaj liczbę wyrazów w szeregu Leibniza: ");
    scanf("%d", &x);
     double pi = przy_pi(x);
    printf("Przybliżenie pi z %d wyrazów: %.15f\n", x, pi);

    return 0;
}