/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int grades[10];
    int sum = 0;
    int failed = 0;
    int passed = 0;
    int max;
    int min;
    float avg;
    
    for (int i = 0; i<10;i++){
        printf("\nDigite a nota do aluno %d: ", i+1);
        scanf("%d",&grades[i]);
        
        if (grades[i] > 100 || grades[i] <0){
            printf("\nNota inválida. Por favor inserir uma nota entre 0 e 100.");
            i--;
            continue;
        }
        else{
            sum+=grades[i];
            
            if(grades[i]>=60){
                passed++;
            }
            else if(grades[i]<60){
                failed++;
            }
        }
    }
    
    max = grades[0];
    min = grades[0];
        
    for (int i=0; i<10;i++){
        if(grades[i] > max){
                max = grades[i];
        }
        if(grades[i]<min){
                min=grades[i];
        }
    }
        
        
    avg = (float)sum/10;   
        
    printf("\n----Resultados----");
    printf("\nMaior nota: %d", max);
    printf("\nMenor nota: %d", min);
    printf("\nMédia da turma: %.2f", avg);
    printf("\n%d alunos passaram", passed);
    printf("\n%d alunos reprovaram", failed);
    printf("\nNotas acima da média da turma:\n");
    for(int i = 0; i<10;i++){
        if(grades[i]>avg){
            printf("\nEstudante %d: %d", i+1, grades[i]);
        }
    }
    int searchGrade = 0;
    int found = 0;
    printf("\n\n Digite uma nota para pesquisar: ");
    scanf("%d", &searchGrade);
    
    printf("\n\n----Notas encontradas----");
    for (int i = 0; i<10;i++){
        if(grades[i]==searchGrade){
            printf("\nPosição %d, estudante %d, nota: %d", i, i+1, grades[i]);
            found = 1;
        }
        if (found=0){
            printf("\nNenhuma nota correspondente encontrada. Encerrando...");
            return 0;
        }
    }
    
    
    
}
