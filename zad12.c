#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kwota, a;
    printf("podaj kwote: \n");
    scanf("%d", &kwota);
    if (kwota % 10 == 0 && kwota >= 20){
        for (int x = 0; x <= kwota/100; ++x)
        {
            for (int y=0; y<= (kwota -x*100)/ 50; ++y)
        {
                a = (kwota -x*100 -y*50) /20;
                if (x*100 + y*50 + a*20 == kwota)
                printf("%d = %d*100 + %d*50 + %d*20\n", kwota, x, y, a);

        }
        }
    }
    else if (kwota %10 != 0){
        printf("podanej kwoty nie mo¿na zapisaæ w ten sposób\n");
    }
    else{
        printf("niepoprawny format\n");
    }

}
