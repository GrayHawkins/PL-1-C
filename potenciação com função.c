/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int potenciaInt(int base, int expoente){
    int resultado = base;
    for(int i = 1; i<expoente;++i){
        resultado = resultado*base;
    }
    printf("%d",resultado);
}


int main()
{
    int base;
    int expoente;
    printf("Insira o valor da base: ");
    scanf("%d",&base);
    printf("Insira o valor do expoente: ");
    scanf("%d",&expoente);
    potenciaInt(base,expoente);
    
    
}
