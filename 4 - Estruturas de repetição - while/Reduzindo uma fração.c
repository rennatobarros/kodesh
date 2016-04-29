#include<stdio.h>

int main()
{
    
    int n1, n2, divisor, dividendo, resto;

    scanf("%d", &n1);
    scanf("%d", &n2);

    
    if (n1 > n2)
      dividendo = n1, divisor = n2;
    else
      dividendo = n2, divisor = n1;

    do {
      resto = dividendo % divisor;
      dividendo = divisor;
      divisor = resto;
    } while (resto != 0);

    printf("%d %d ", n1 / dividendo, n2 / dividendo);
    return 0;
}