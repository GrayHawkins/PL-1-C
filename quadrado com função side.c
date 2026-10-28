/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int side(int lado){
    for(int j = 1; j<=lado;j++){
        printf("\n");
        for(int i = 1; i<=lado;i++){
            printf("*");
        }
    }
}
int main()
{
    int lado;
    printf("Digite o tamanho do lado do quadrado: ");
    scanf("%d",&lado);
    side(lado);

    return 0;
}
