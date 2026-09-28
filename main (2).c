/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a = 3;
    printf("A\tA+2\tA+4\tA+6");
    for (int i =1;i<6;i++){
        printf("\n%d\t%d\t%d\t%d", a*i,(a*i)+2,(a*i)+4,(a*i)+6);
    }

    return 0;
}
