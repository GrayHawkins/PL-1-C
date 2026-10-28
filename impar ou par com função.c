/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int even(int num){
    if(num%2==0){
        return 1;
    }
    return 0;
}

int main()
{
    int num;
    int opcao = 0;
    while(opcao!=2){
        printf("\nEscolha uma opção:\n1-Checar se um número é impar ou par\n2-Sair\n-- ");
        scanf("%d",&opcao);
        switch(opcao){
            case 1:
                printf("\nDigite o número: ");
                scanf("%d",&num);
                if (even(num) == 1){
                    printf("%d é par\n",num);
                }
                else{
                    printf("%d é impar\n", num);
                }
                
                break;
            case 2:
                printf("\nSaindo...");
                break;
            default:
                printf("\nOpção inválida.");
                break;
        }
    }

    return 0;
}
