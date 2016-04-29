#include <stdio.h>
#include <math.h>

int main()
{
    int x, n, soma = 0, i, j, fat, sinal = 1;
    
    scanf("%d %d", &x, &n);
    
    for(i = 1; i <= n; i += 2){
        fat = 1;
        for(j = 1; j <= i; j++)
            fat *= j;
        soma += sinal * (int)(pow(x, i)/fat);
        sinal *= -1;
    }
    
    printf("%d\n", soma);
    return 0;    
}