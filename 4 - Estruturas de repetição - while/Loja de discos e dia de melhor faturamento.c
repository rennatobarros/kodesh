#include <stdio.h>

int main()
{
    int n, c = 1, d_quant = 0, d_dia = 0;
    
    while(c <= 30){
        scanf("%d", &n);
        
        if(n > d_quant)
            d_quant = n, d_dia = c;
        c++;
    }
    
    printf("%d %d", d_dia, d_quant);
    
    return 0;
}