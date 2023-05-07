// Question ==>  Make program to input student information from user & enter it to a file.


#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("student.txt", "w");

    char name [100];
    int age;
    float cgpa;

    printf("enter name:");
    scanf("%s", name);
     printf("enter age:");
    scanf("%d", &age);
     printf("enter cgpa:");
    scanf("%f", &cgpa);

    fprintf(fptr, "student name: %s\n", name);
    fprintf(fptr, "student age: %d\n", age);
    fprintf(fptr, "student cgpa: %f", cgpa);

    fclose(fptr);
    return 0;
}