include <stdio.h>

int main()
{
    int n, i, c = 0;
    float x, y;
    
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%f", &x);
        scanf("%f", &y);
        
        if((x <= 0 && y <= 0 && y + x*x + 2*x - 3 <= 0) || (x >= 0 && y + x*x - 2*x - 3 <= 0))
            c++;
    }
    
    printf("%d", c);
    return 0;    
}