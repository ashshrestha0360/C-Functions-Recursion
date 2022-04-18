#include <stdio.h>
void sum(int, int);
void main(){
    int a, b;
    printf("Enter any two number:\n");
    scanf("%d %d", &a, &b);
    sum(a, b);
}

void sum(int a, int b){
    int c = a + b;
    printf("The sum is %d", c);
}
