#include <stdio.h>

int main()
{
    int n, c = 0, n_primo = 1;
    
    scanf("%d", &n);
    
    while(c < n){
        printf("%d ", n_primo);
        n_primo += 2;
        c++;
    }
    
    return 0;
}