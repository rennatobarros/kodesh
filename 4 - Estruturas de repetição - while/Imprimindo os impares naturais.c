#include <stdio.h>

int main()
{
    int n, i = 1, c = 0;
    scanf("%d", &n);
    
    while(c < n){
        printf("%d ", i);
        i += 2;
        c++;
    }
    
    return 0;
}