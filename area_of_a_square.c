#include <stdio.h>
#include <math.h>

/* calculates the area of a square (l x b)*/

float area();

int main()
{
    double a;
    printf("Enter the value here\n");
    scanf("%lf", &a);

    printf("the area of a square is %lf\n", pow(a, 2));
    return 0;
}