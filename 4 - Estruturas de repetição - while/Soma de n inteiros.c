#include <stdio.h>

int main()
{
    int n, m, c = 0;
    int result;
    scanf("%d", &n);
    
    while(c < n){
        scanf("%d", &m);
        result += m;
    }
    
    printf("%d", result);
    
    return 0;
}