#include <stdio.h>

int main()
{
    int n, notas, n_maior = 0, n_menor = 100, c = 0;
    
    scanf("%d", &n);
    
    while(c < n){
        scanf("%d", &notas);
        
        if(notas > n_maior)
            n_maior = notas;
        if(notas < n_menor)
            n_menor = notas;
        c++;
    }
    
    printf("%d %d", n_maior, n_menor);
    
    return 0;
}