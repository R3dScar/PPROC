#include <stdio.h>
#include <string.h>

int main() {
    char roman[100];
    int result = 0;

    
    printf("Wprowadź liczbę w postaci rzymskiej: ");
    scanf("%s", roman);

    int length = strlen(roman);

    
    for (int i = 0; i < length; i++) {
        int current = 0, next = 0;

        
        switch (roman[i]) {
            case 'I': current = 1; break;
            case 'V': current = 5; break;
            case 'X': current = 10; break;
            case 'L': current = 50; break;
            case 'C': current = 100; break;
            case 'D': current = 500; break;
            case 'M': current = 1000; break;
            default: current = 0; break; 
        }

        if (i + 1 < length) {
            
            switch (roman[i + 1]) {
                case 'I': next = 1; break;
                case 'V': next = 5; break;
                case 'X': next = 10; break;
                case 'L': next = 50; break;
                case 'C': next = 100; break;
                case 'D': next = 500; break;
                case 'M': next = 1000; break;
                default: next = 0; break; 
            }
        }

       
        if (current < next) {
            result -= current;
        } else {
            result += current;
        }
    }

    
    printf("Liczba całkowita: %d\n", result);

    return 0;
}
