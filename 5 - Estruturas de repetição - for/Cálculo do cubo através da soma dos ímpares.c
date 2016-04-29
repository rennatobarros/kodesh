#include <stdio.h>

int main()
{
    int n, m, i = 0, imp = 1;
    scanf("%d", &m);
    
    for(n = 1; n <= m; ++n)
    {
        printf("%d*%d*%d = %d", n, n, n, imp);
        for(i = 1; i < n; ++i)
            printf(" + %d", imp + 2*i);
        imp += 2*n;
        printf("\n");
    }
    
    return 0;    
}