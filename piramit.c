
#include <stdio.h>
int main() {
    int i, j, kenar;
    printf("piramit kenar sayısı: ");
    scanf("%d", &kenar);
    for (i = kenar; i >= 1; --i) {
        for (j = 1; j <= i; ++j) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
