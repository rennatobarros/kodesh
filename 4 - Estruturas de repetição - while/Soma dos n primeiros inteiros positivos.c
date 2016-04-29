#include <stdio.h>

int main()
{
    int n, result, c = 1;
    
    scanf("%d", &n);
    
    while(c <= n)
        result += c, c++;
    
    printf("%d", result);
    
    return 0;
}