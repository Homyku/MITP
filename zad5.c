#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, x;
    char c;
    printf("Podaj wyra¿enie:");
    scanf("%f%c%f", &a, &c, &b);

    switch (c)
{
          case   '+': x=a+b;
                   printf("Wynik: %f\n", x);
                   break;
          case   '-': x=a-b;
                   printf("Wynik: %f\n", x);
                   break;
          case   '*': x=a*b;
                   printf("Wynik: %f\n", x);
                   break;
          case   '/': x=a/b;
                   printf("Wynik: %f\n", x);
                   break;

}
}
