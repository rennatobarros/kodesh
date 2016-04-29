#include <stdio.h>

int main()
{
    int d, temp, c = 0, c_temp = 0;
    scanf("%d", &d);
    
    while(c < d){
        scanf("%d", &temp);
        if(temp < 0)
            c_temp++;
        c++;
    }
    
    printf("%d", c_temp);
    
    return 0;
}