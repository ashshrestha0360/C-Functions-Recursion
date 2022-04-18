#include <stdio.h>
/*void vol(float, float, float);
void main(){
    float l, b, h;
    printf("Enter the length, breadth and height\n");
    scanf("%f %f %f", &l, &b, &h);
    vol(l, b, h);
}

void vol(float a, float b, float c){
    float r = a * b * c;
    printf("The volume is %f", r);
}*/

void main(){
    FILE *f;
    f = fopen("employee.txt", "w");
    if(f == NULL){
        printf("File not found");
    }
    else{
        char name[100], address[100];
        int salary, i, n;
        printf("Enter the no. of employee\n");
        scanf("%d", &n);
        for(i = 0; i < n; i ++){
            printf("Enter the name, address and salary\n");
            scanf("%s %s %d", name, address, &salary);
            fprintf(f, "\t%s\t%s\t%d\n", name, address, salary);
        }

    }

    fclose(f);
    f = fopen("employee.txt", "r");
    char name[100], address[100];
        int salary, i, n;
     printf("\tName\tAddress\tSalary\n");
        while(fscanf(f, "%s %s %d", name, address, &salary) != EOF){
            printf("\t%s\t%s\t%d\n", name, address, salary);
        }
}
