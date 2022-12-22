//melisa


#include <stdio.h>
int main() {
    int i, j, sayi;
    printf("kaç sayı olsun : ");
    scanf("%d", &sayi);
    for (i = 1; i <= sayi; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
