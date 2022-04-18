#include <stdio.h>
int fib(int);
void main()
{
    int n, sum = 0;
    printf("Limit: ");
    scanf("%d", &n);
    int i;
    for (i = 1; i <= n; i++)
    {
        int f = fib(i);
        printf("%d ", f);
        if (f % 2 == 0)
        {
            sum = sum + f;
        }
    }
    printf("\n***************");
    printf("\nSum: %d", sum);
}

int fib(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return (fib(n - 1) + fib(n - 2));
}