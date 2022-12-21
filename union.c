// Melisa union struct birlikte


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union information {
    int age;
    float gelir;
    char name[20];
};

struct student {
    union information info;
    enum {age, gelir, name} ozellik;
};

int main() {
    struct student ogrenci;
    ogrenci.ozellik = age;
    ogrenci.info.age = 24;
    printf("Age %d\n", ogrenci.info.age);
    
    ogrenci.ozellik = gelir;
    ogrenci.info.gelir = 7000;
    printf("Money %2.f\n", ogrenci.info.gelir);
    
    ogrenci.ozellik = name;
    strcpy(ogrenci.info.name, "melisa");
    printf("Name %s", ogrenci.info.name);
    
    
    return 0;
}
