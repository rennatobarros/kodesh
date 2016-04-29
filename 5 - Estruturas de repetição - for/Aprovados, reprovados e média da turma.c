#include <stdio.h>

int main()
{
    int n, i, n_apro = 0, n_repro = 0;
    float p1, p2, p3, media, m_classe = 0;
    
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        scanf("%f", &p1);
        scanf("%f", &p2);
        scanf("%f", &p3);
        
        media = (p1 + p2 + p3)/3;
        m_classe += media/n;
        
        if(media >= 5)
            n_apro++;
        else
            n_repro++;
            
        printf("Aluno %d:\nMedia: %.1f\n", i, media);
    }
    printf("Media da Turma: %.1f\nAprovados: %d\nReprovados: %d", m_classe, n_apro, n_repro);
    return 0;    
}