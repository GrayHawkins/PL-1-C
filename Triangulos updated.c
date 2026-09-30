
#include <stdio.h>

int main(){
    float sides[3];
    
    for (int i = 0; i<3;i++){
        printf("\nDigite o valor do lado %d: ", i+1);
        scanf("%f", &sides[i]);
    }
        
    if(sides[0]>sides[1]+sides[2] || sides[1]>sides[0]+sides[2] || sides[2]>sides[0]+sides[1]){
        printf("\nOs valores %.2f, %.2f e %.2f não podem formar um triângulo.", sides[0], sides[1], sides[2]);
        return 0;
    }
        
    else{
        printf("\nOs valores %.2f, %.2f e %.2f podem formar um triângulo", sides[0], sides[1], sides[2]);
        float hipo = 0;
        float cat1=0;
        float cat2=0;
        
        hipo = sides[0];
        cat1 = sides[1];
        cat2 = sides[2];
        
        if (cat1>hipo){
            hipo = sides[1];
            cat1 = sides[0];
        }
        if (cat2>hipo){
            hipo=sides[2];
            cat2 = sides[1];
        }
        
        if ((cat1*cat1)+(cat2*cat2)==(hipo*hipo)){
            printf("\nOs valores também podem formar um triângulo retângulo.");
        }
        else{
            printf("\nOs valores não podem formar um triângulo retângulo.");
        }
        return 0;
    }
    
}

