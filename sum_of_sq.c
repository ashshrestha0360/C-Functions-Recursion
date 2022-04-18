#include <stdio.h>
#include <math.h>
void main()
{
    int num, i = 1, sum = 0;
    printf("Enter the number\n");
    scanf("%d", &num);
    while (i <= num)
    {
        sum = sum + pow(i, 2);
        i++;
    }
    printf("Sum of squares: %d", sum);
}