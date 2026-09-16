#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1;
    int num2;

    printf("Insert the first number: ");
    scanf("%d",&num1);

    printf("Insert the second number: ");
    scanf("%d",&num2);


    if (num1 == num2){
        printf("Both numbers are equal.");

    }


    if (num1 > num2){
        printf("%d is larger", num1);
    }

    if (num2 > num1){
        printf("%d is larger", num2);
    }
}
