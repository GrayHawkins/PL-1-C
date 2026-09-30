
#include <stdio.h>

int main()
{
    
    int num = 0;
    printf("Digite o número: ");
    scanf("%d", &num);
    if (num<0){
        printf("Valor inválido.");
    }
    
    else if (num==0){
        printf("0! = 1");
    }
    
    
    else{
        int fatorial = num;
        
        for (int i = 1; i<num;i++){
            
            fatorial *= num-i;
            
        }
        printf("%d! = %d",num,fatorial);
        
    }
    
    
return 0;
}
