/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sum =0;
    float score=0;
    float input=0;
    float i=0;
    while (1){
        printf("\n Insira da nota do aluno numero %.0f (-1 para sair): ",i+1);
        scanf("%f",&score);
        
        if(score==-1){
            break;
        }
        if (score>100 || score<0){
            printf("\nNota inválida. Tente novamente.");
            continue;
        }
        else{
            sum+=score;
        }
        i++;
        
    }
    float avg = sum/i;
    printf("\n Media da turma: %.2f", avg);
}