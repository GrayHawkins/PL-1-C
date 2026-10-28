
#include <stdio.h>
int multiple(int num1, int num2){
    if(num1 == 0){
        return 0;
    }
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
