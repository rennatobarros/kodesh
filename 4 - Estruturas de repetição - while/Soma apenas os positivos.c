#include <stdio.h>

int main()
{
    int n, m, c = 0;
    int result;
    scanf("%d", &n);
    
    while(c < n){
        scanf("%d", &m);
        if(m > 0)
            result += m;
        c++;
    }
    
    printf("%d", result);
    
    return 0;
}