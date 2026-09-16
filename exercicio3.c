#include <stdio.h>
#include <stdlib.h>
int main()
{
    float radius;

    printf("Insert the circle's radius: ");
    scanf("%f", &radius);

    float pi = 3.14159;

    printf("\nDiameter: %.2f cm", radius*2);
    printf("\nCircumference: %.2f cm", 2*pi*radius);
    printf("\nArea: %.2f cm²", pi*(radius*radius));

}
