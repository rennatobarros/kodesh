#include <stdio.h>

int main()
{
    int n, altura, caminho, quiques = 0;
    scanf("%d", &n);
    
    altura = n * 1000;
    
    while(altura >= 1)
        caminho += altura * 2, altura /= 2, quiques++;
    printf("%d\n%dm %dcm %dmm", quiques, caminho/1000, (caminho/10)%100, caminho%10);
    
    return 0;    
}