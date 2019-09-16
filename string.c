#include <stdio.h>
//#include <string.h>

int main( )
{
    int a;
    char b[10];
    char d[0];
    char string1[11] = {'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd', '\0'};

    a=123; //(a=0123)X
    printf("%d\n",a);

    strcpy(b,"abc");   // b[1]='n';
    printf("%s\n",b);

    strcpy(d,"abce6ewfwe");
    printf("%s\n",d);

    printf("%s",string1);
}
