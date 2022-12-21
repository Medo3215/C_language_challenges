#include <stdio.h>

int main()
{
    char alph[27];
    int i;
    char *ptr;
    ptr = alph;     

    for(i=0;i<26;i++)
    {
        *ptr=i+'A';
        ptr++;
    }
    ptr = alph;

printf("Letters:\n");
    for(i=0;i<26;i++)
    {
       printf(" %c ", *ptr);
        ptr++;
    }
   
    return(0);
}

//output:
//Letters:
// A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z
