#include <stdio.h>
#define DL_NAZPLIKU 20
#define TRUE 1
#define FALSE 0

int main()
{
    char nazwapliku [DL_NAZPLIKU+1] ;
    FILE * we ;
    char c;
    int lbwierszy, i;
    do{
        printf("podaj nazwe pliku do odczytu:\n");
        gets (nazwapliku);
        if ((we = fopen (nazwapliku, "rt")) == NULL)
            printf("nie ma takiego pliku\n");
    }
    while (we == NULL);

    for (i=0; i<26; i++)
    lbwierszy = 0;
    while (c= fgetc(we), ! feof (we)){
        if (c== '\n') lbwierszy++ ;

    }
    printf("plik zawiera %d wierszy\n", lbwierszy);
}

