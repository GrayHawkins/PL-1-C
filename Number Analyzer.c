#include <stdio.h>
#include <stdlib.h>

int main()
{
    int positive = 0;
    int negative = 0;
    int zero = 0;
    int sum = 0;
    int max = 0;
    int min = 0;
    double avg;

    for (int i = 1; i < 11; i++){
        int num;
        printf("\nInsert the %d th number: ",i);
        scanf("%d", &num);



        if (num > 0) {
            positive++;
        }

        else if (num < 0){
            negative++;
        }
        else {
            zero++;
        }



        if (i==1){
            max = num;
            min = num;
        }

        else {
            if (num > max){
                max = num;
            }
            if (num < min){
                min = num;
            }
        }

        sum += num;
    }

    avg = (double)sum/10;
    printf ("%d are positive\n", positive);
    printf ("%d are negative\n", negative);
    printf ("%d are equal to zero\n", zero);
    printf ("%d is the largest number\n", max);
    printf ("%d is the smallest number\n", min);
    printf ("sum = %d\n", sum);
    printf ("The average is %.2f\n", avg);



    return 0;
}
