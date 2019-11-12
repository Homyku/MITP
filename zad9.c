#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("podaj wysokosc: ");
    scanf("%i", &a);
    printf("\n");
    for (int i=0; i<=a;i++){
        printf("\t");
        for(int b=0; b<a-i; b++){
            printf(" ");
        }
        for(int d=0; d<i; d++){
            printf("%%");
        }
        for(int e=0; e<i-1; e++){
            printf("%%");
        }
    printf("\n");
    }
}
