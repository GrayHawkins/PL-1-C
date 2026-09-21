#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sum = 0;
    float score = 0;
    float i = 0;
    int loop = 1; 
    
    while (loop == 1) { 
        printf("\nInsira a nota do aluno numero %.0f (num > 100 ou < 0 para sair): ", i + 1);
        scanf("%f", &score);
        
        if (score < 0) {
            loop = 0; 
        } 
        
        else {
            sum += score; 
            i++;          
        }
    }
    
    
    
    float avg = sum / i;
    printf("\nMedia da turma: %.2f\n", avg);
    
    
    return 0;
}
