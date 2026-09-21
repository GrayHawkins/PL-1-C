/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    int max;
    int min;
    printf("insira o primeiro numero: ");
    scanf("%d",&num1);
    max=num1;
    min=num1;
    
    printf("insira o segundo numero: ");
    scanf("%d",&num2);
    if (num2>max){
        max=num2;
    }
    if (num2<min){
        min=num2;
    }
    printf("insira o terceiro numero: ");
    scanf("%d",&num3);
    if (num3>max){
        max=num3;
    }
    if (num3<min){
        min=num3;
    }
    
    printf("insira o quarto numero: ");
    scanf("%d",&num4);
    if (num4>max){
        max==num4;
    }
    if (num4<min){
        min=num4;
    }
    
    printf("insira o quinto numero: ");
    scanf("%d",&num5);
    if (num5>max){
        max=num5;
    }
    if (num5<min){
        min=num5;
    }
    
    
    printf("\nMaior: %d",max);
    printf("\nMenor: %d",min);
    
}