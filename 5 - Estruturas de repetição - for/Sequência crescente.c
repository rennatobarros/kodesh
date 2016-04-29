#include <stdio.h>

int main()
{
    int i, n, n2, n_now = 0, temp = 1;
    
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &n2);
        if(n2 > n_now)
            n_now = n2;
        else
            temp = 0;
    }
    
    printf("%d", temp);
    return 0;
}