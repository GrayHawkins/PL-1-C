/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    struct Student{
        char name[50];
        int id;
        float grade;
    }
    
    struct Student students[10];
    
    
    for(int i = 0; i< sizeof(students)/sizeof(students[0]); i++){
        printf("%d", i);
    }
    return 0;
}