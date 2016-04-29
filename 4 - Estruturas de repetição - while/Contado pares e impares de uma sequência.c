#include <stdio.h>

int main()
{
    int n, par = 0, impar = 0, c = 0;
    scanf("%d", &n);
    
    while(c < n){
        int temp;
        scanf("%d", &temp);
        
        temp % 2 == 0 ? par++ : impar++, c++;
    }
    
    printf("%d %d", par, impar);
    
    return 0;
}