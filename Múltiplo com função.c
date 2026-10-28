/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int multiple(int num1, int num2){
    if(num2%num1 == 0){
        return 1;
    }
    
    return 0;
    
}
int main()
{
    int num1;
    int num2;
    printf("Digite o primeiro número: ");
    scanf("%d",&num1);
    printf("Digite o segundo número: ");
    scanf("%d",&num2);
    
    if (multiple(num1,num2) == 1){
        printf("%d é multiplo de %d", num2, num1);
    }
    else{
        printf("%d não é multiplo de %d", num2, num1);
    }
}
