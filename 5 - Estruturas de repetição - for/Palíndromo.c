#include <stdio.h>

int main()
{
    int n, n_reverso = 0, aux;
    scanf("%d", &n);
    
    aux = n;
    
    while(aux != 0)
        n_reverso = n_reverso * 10 + aux % 10, aux /= 10;
    n_reverso == n ? printf("S") : printf("N");
    
    return 0;    
}