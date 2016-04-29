#include <stdio.h>

int main()
{
    int n, cont = 0;
    scanf("%d", &n);

    while(n > cont){
        printf("%u ", 1<<cont);
        cont++;
    }
    
    return 0;    
}