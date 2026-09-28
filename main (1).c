/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    float sides[3];
    for (int i = 0; i<3;i++){
        printf("Digite o valor do lado %d: ", i+1);
        scanf("%f", &sides[i]);
    }
    
    
        
    if(sides[0]>sides[1]+sides[2] || sides[1]>sides[0]+sides[2] || sides[2]>sides[0]+sides[1]){
        printf("Os valores %.2f, %.2f e %.2f não podem formar um triângulo.", sides[0], sides[1], sides[2]);
        return 0;
    }
        
    if(sides[0]<sides[1]-sides[2] || sides[1]<sides[0]-sides[2] || sides[2]<sides[0]-sides[1]){
        printf("Os valores %.2f, %.2f e %.2f não podem formar um triângulo.", sides[0], sides[1], sides[2]);
        return 0;
    }
        
    else{
        printf("Os valores %.2f, %.2f e %.2f podem formar um triângulo", sides[0], sides[1], sides[2]);
        return 0;
    }
        
    
    
}
