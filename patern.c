//melisa 


#include <stdio.h>
#include <stdlib.h>
#define kenar 8

int main() {
    int i, j;
    for (i = 1; i <= kenar; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
