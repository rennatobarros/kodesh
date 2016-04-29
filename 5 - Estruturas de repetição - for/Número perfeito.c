#include <stdio.h>

int main()
{
    int n, i, j, soma = 0;
    
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        for(j = 1; j < i; j++){
            if(i % j == 0)
                soma += j;
        }
        if(soma == i)
            printf("%d ", i);
        soma = 0;
    }
    return 0;    
}