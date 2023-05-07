// Question ==>  Two numbers a&b, are written in file, write program to replace them with their sum.

#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("sum.txt", "r");

    int a;
    fscanf(fptr, "%d", & a);
    int b;
    fscanf(fptr, "%d", & b);

    fclose(fptr);

    fptr= fopen("sum.txt", "w");
    fprintf(fptr, "%d", a + b);
    fclose(fptr);
    return 0;
    
    }