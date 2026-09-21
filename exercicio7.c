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
    int current;
    printf("insira um numero de cinco digitos: ");
    scanf("%d",&num);
    
    
    
    printf("\n%d",num/10000);
    
    
    printf("   %d",(num%10000)/1000);
   
    printf("   %d", ((num%10000)%1000)/100 );
    
    printf("   %d", (((num%10000)%1000)%100)/10 );
    printf("   %d", ((((num%10000)%1000)%100)%10));
}