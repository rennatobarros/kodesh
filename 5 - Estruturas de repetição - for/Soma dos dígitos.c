#include <stdio.h>

int main()
{
    int n, i = 0;
    scanf("%d", &n);
    
    while(n > 0)
        i += n % 10, n /= 10;
    printf("%d", i);
    
    return 0;    
}
