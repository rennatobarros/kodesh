#include <stdio.h>

int main()
{
    int n, k;
    float h = 0;
    
    scanf("%d", &n);
    for(k = 1; k <= n; k++)
        h += 1.0/k;

    printf("%.3f", h);
    
    return 0;    
}