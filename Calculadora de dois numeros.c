/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int sum(int a,int b){
    return a+b;
}

int sub(int a,int b){
    return a-b;
}

int mult(int a,int b){
    return a*b;
}

float divi(float a,float b){
    return a/b;
}

int main()
{
    int opcao = 0;
    int menu = 0;
    int num1;
    int num2;
    while (menu != 2){
        
        printf("Bem vindo à Calculadora de Dois Números. Escolha uma das opções abaixo:\n1- Iniciar\n2- Sair\n-- ");
        scanf("%d",&menu);
        
        switch(menu){
            case 1:
                printf("Digite o primeiro número: ");
                scanf("%d",&num1);
                printf("Digite o segundo número: ");
                scanf("%d",&num2);
                while (opcao != 5){
                    printf("Escolha uma das Opções abaixo: \n1 - Soma\n2 - Subtração\n3- Multiplicação\n4 - Divisão\n5 - Voltar ao menu\n-- ");
                    scanf("%d",&opcao);
                    switch(opcao){
                        case 1:
                            printf("soma: %d\n", sum(num1,num2));
                            break;
                        case 2:
                            printf("subtração: %d\n", sub(num1,num2));
                            break;
                        case 3:
                            printf("multiplicação: %d\n", mult(num1,num2));
                            break;
                        case 4:
                            if (num2 != 0){
                                printf("divisão: %.2f\n", divi(num1,num2));
                            }
                            else {
                                printf("Divisão por zero!\n");
                            }
                            break;
                        case 5:
                            printf("voltando...\n");
                            break;
                        default:
                            printf("\nOpção inválida. Escolha uma opção de 1 a 5.");
                    }
                }
                opcao = 0;
                break;
                
            case 2:
                printf("Saindo...");
                break;
            default:
                printf("Opção Inválida. Escolha uma opção de 1 a 2.");
        }
    }
   
    return 0;
}