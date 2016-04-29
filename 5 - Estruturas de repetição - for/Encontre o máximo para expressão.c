#include <stdio.h>

int main()
{
    int m, n, x, y, ex, m_ex = 0, m_x, m_y;
    scanf("%d", &m);
    scanf("%d", &n);
    
    for(x = 1; x <= m; x++)
        for(y = 1; y <= n; y++){
            ex = x*y - x*x + y;
            if(ex > m_ex)
                m_ex = ex, m_x = x, m_y = y; 
        }    
    printf("%d x=%d y=%d", m_ex, m_x, m_y);
    return 0;    
}