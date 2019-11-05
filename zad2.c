#include <stdio.h>

int main()
{
    int a, b;
    printf("podaj liczbe:\n");
    scanf("%i", &a);
    printf("podaj druga liczbe:\n");
    scanf("%i" , &b);
    if(a > b) {
        printf("%i\n" , a);
    }
    else if(a < b){
        printf("%i\n" , b);
    }
    else  {
        printf("%i = %i\n" , a, b);
    }
}
