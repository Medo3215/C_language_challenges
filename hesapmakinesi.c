
#include <stdio.h>

int main() {

    char op;
    double first, second;
    printf("işlem seçin  (+, -, *, /): ");
    scanf("%c", &op);
    printf("iki sayı girin: ");
    scanf("%lf %lf", &first, &second);
    
    switch (op) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
            break;
        // operator doesn't match any case constant (+, -, *, /)
        default:
            printf("Operator hatası");
    }
    
    return 0;
}

