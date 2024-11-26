#include <stdio.h>
#include <math.h>

int main() {
    for (int p = 1; p <= 1000; p++)
        for (int q = p; q <= 1000; q++) {
            int r = sqrt(p * p + q * q);
            if (r <= 1000 && r * r == p * p + q * q)
                printf("(%d, %d, %d)\n", p, q, r);
        }
    return 0;
}
