#include <stdio.h>

int main()
{
    int n, n1, n2, resto, c;
    scanf("%d\n", &n);
    scanf("%d", &n1);
    
    for(c = 0; c < n; ++c){
        scanf("%d", &n2);
        while(n2 != 0)
            resto = n1 % n2, n1 = n2, n2 = resto;
    }
    
    printf("%d", n1);
    return 0;    
}