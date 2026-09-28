/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    float valorHora =0;
    float horas = 0;
    float salario;
    printf("----Calculadora de Salários----");
    while (1){
        
        printf("\nInsira o número de horas trabalhas (0 para sair): ");
        scanf("%f", &horas);
        if (horas == 0){
            break;
        }
        
        printf("\nInsira o salário por hora do(a) funcionário(a) (R$00.00): ");
        scanf("%f",&valorHora);
        
        
        
        
        salario = valorHora*horas;
        if (horas>=40){
            salario=horas*(valorHora*1.5);
        }
        
        printf("Salário: %.2f",salario);
    }
    
    return 0;
}
