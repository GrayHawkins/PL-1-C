#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int num3;
    int min;
    int max;
    int prod;

    printf("Insert the first number: ");
    scanf("%d",&num1);

    printf("\nInsert the second number: ");
    scanf("%d",&num2);

    printf("\nInsert the third number: ");
    scanf("%d",&num3);

    int sum = num1+num2+num3;

    double avg = sum/3;

    prod = num1*num2*num3;

    max = num1;

    if (num2 > max) {
        max = num2;
    }

    if (num3 > max){
        max = num3;
    }

    min = num1;

    if (num2 < min) {
        min = num2;
    }

    if (num3 < min){
        min = num3;
    }

    printf("\nThe sum is %d\n", sum);
    printf("The average is %.2f\n", avg);
    printf("The product is %d\n", prod);
    printf("%d is the smallest\n", min);
    printf("%d is the largest\n", max);

}
