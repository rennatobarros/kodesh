#include <stdio.h>

int main()
{
    int n, i, soma = 0;
    
    scanf("%d", &n);
    
    for(i = 1; i <= n/2; i++)
        soma = soma + i + i*i;        
    if( n % 2 == 1)
        soma += i;
    printf("%d", soma);
    
    return 0;    
}