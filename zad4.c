#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    int b;
    printf("podaj liczbe:\n");
    scanf("%f", &a);
    b = (int)a;
    if(a == b){
        printf("calkowita\n");
    if ( b%2 ==0 ){
    printf("parzysta\n");
    }
    else{
    printf("nieparzysta\n");
    };

    }
    else {
           printf("niecalkowita\n");
           }
}
