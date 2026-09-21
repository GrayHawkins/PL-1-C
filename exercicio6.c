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
    printf("Insira o número: ");
    scanf("%d",&num);
    if (num%2==0){
        printf("\nO número é par");
    }
    if (num%2!=0){
        printf("\nO número é impar");
    }
}