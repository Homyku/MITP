#include <stdio.h>

int main()
{
    float a;
    float  b;

    printf("podaj temperature w C:\n");
    scanf("%f" , &a);
    b = 1.8*a + 32;
    printf("ta temperatura to w stopniach F %f", b);


}
