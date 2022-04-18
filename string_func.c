#include <stdio.h>
int slength(char[]);
int scompare(char[], char[]);
void main()
{
    char a[10] = "ball";
    int l = slength(a);
    printf("%d", l);
    char b[10] = "ball";
    int c = scompare(a, b);
    if(c == 1)
    {
        printf("Same");
    }
    else
    {
        printf("Different");
    }
}

int slength(char x[])
{
    int i, count = 0;
    for(i = 0; x[i] != '\0'; i ++)
    {
        count ++;
    }

    return count;
}

int scompare(char x[], char y[])
{
    int i, flag = 0;
    while(x[i] != '\0' && y[i] != '\0')
    {
        if(x[i] != y[i])
        {
            flag = 1;
        }

        i++;
    }
    if(flag == 0 && x[i] != '\0' && y[i] != '\0')
        return 1;
    else
        return 0;
}