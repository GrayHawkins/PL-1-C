
#include <stdio.h>

int main()
{
    
    int num = 0;
    printf(" ===========================\n Calculadora de Fatorial\n===========================");
    printf("\n| Digite o número: ");
    scanf("%d", &num);
    if (num<0){
        printf("---------------------------\n| Valor inválido.\n---------------------------");
    }
    
    else if (num==0){
        printf("---------------------------\n| 0! = 1\n---------------------------");
    }
    
    
    else{
        int fatorial = num;
        
        for (int i = 1; i<num;i++){
            
            fatorial *= num-i;
            
        }
        printf("---------------------------\n| %d! = %d\n---------------------------\n",num,fatorial);
        
    }
    
    
return 0;
}
