/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int eprimo(int num){
    if (num<2){
        return 0;
    }
    
    else{
        for(int i = 2; i<num;i++){
            if(num%i==0){
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int num;
    printf("Digite um número: ");
    scanf("%d",&num);
    if(eprimo(num) == 1){
        printf("%d é primo",num);
    }
    else{
        printf("%d não é primo",num);
    }

    return 0;
}