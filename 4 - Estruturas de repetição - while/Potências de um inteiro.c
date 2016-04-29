#include <stdio.h>

int main()
{
    int x, n, y = 1, c = 0;
    scanf("%d", &x);
    scanf("%d", &n);
    
    while(c < n){
        y = x * y;
        c++;
    }
    
    printf("%d", y);
    
    return 0;    
}