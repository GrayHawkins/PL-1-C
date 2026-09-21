/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    printf("Digite um número: ");
    scanf("%d",&num);
    int potencia = num;
    while (potencia<=100){
        potencia*=num;
        
    }

    printf("\nResultado: %d",potencia);
}