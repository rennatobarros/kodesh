#include <stdio.h>

int main()
{
    int n1, n2, resto;
    
    scanf("%d", &n1);
    scanf("%d", &n2);
    
    while(n2 != 0){
        resto = n1 % n2;
        n1 = n2;
        n2 = resto;
    }
    
    printf("%d", n1);
    
    return 0;
}