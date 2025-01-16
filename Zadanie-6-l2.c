#include <stdio.h>

int main() {
    int number;
    char roman[50] = "";  
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    
    printf("Wprowadź liczbę (1-3999): ");
    scanf("%d", &number);

    
    if (number < 1 || number > 3999) {
        printf("Liczba spoza zakresu!\n");
        return 1;
    }

    
    for (int i = 0; i < 13; i++) {
        while (number >= values[i]) {
            strcat(roman, symbols[i]);
            number -= values[i];
        }
    }

    
    printf("Postać rzymska: %s\n", roman);

    return 0;
}
