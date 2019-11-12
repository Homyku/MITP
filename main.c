#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("podaj dlugosc boku:");
    scanf("%d", &a);
    printf("\n");
    for(int i = 0; i<a ; ++i){
        printf("%%");
     }

    for(int i = 0; i < a-2; ++i){
        printf("\n%%");
        for(int j=0; j<a-2; ++j){
            printf(" ");
        }
        printf("%%");
     }
     printf("\n");
    for(int i=0; i<a; ++i){
        printf("%%");
    }
    printf("\n");
    return 0;

}
