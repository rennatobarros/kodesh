#include <stdio.h>

int main()
{
    float x,y;
    scanf("%f %f", &x, &y);
    
    if(x >= 0 && y >= 0 && x*x + y*y <= 1) printf("1");
    else printf("0");
    
    return 0;    
}