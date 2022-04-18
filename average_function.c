#include <stdio.h>
float avg(int a, int b);
int main()
{
    int a, b;
    printf("Enter the two numbers\n");
    scanf("%d %d", &a, &b);
    printf("The average is %.2f", avg(a, b));
    return 0;
}
float avg(int a, int b)
{
    float result;
    result = (float)(a + b) / 2;
    return result;
}