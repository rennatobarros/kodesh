#include <stdio.h>

int main()
{
    int n, m, c = 0;
    int par = 0, impar = 0;
    scanf("%d", &n);
    
    while(c < n){
        scanf("%d", &m);
        if(m % 2 == 0)
            par += m;
        else
            impar += m;
        c++;
    }
    
    printf("%d %d", par, impar);
    
    return 0;
}