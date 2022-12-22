#include <stdio.h>

int main(){
    int a, b, temp;
    printf("a ve b sayılarını gir \n");
    scanf("%d%d", &a, &b);

    printf("swap öncesi\nilk sayi = %d\nikinci sayı = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("swap sonrası\nilk sayi = %d\nikinci sayı  = %d\n", a, b);

    return 0;
}

// output:
// swap öncesi
// ilk sayi = 1
// ikinci sayı = 2
// swap sonrası
// ilk sayi = 2
// ikinci sayı  = 1
