#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d,x;
    printf("Podaj cztery liczby max 4 cyfrowe:\n");
    scanf("%i" , &a);
    scanf("%i" ,&b);
    scanf("%i" ,&c);
    scanf("%i" ,&d);
    x = a + b + c + d;
    printf("%i\n\t",a);
    printf("%i\n\t", b);
    printf("%i\n\t" ,c);
    printf("%i\n\t" ,d);
    printf("-------\n\t");
    printf("%i\n\t" ,x);
}
