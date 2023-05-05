// Question ==>  Create structure to store complex numbers.

#include<stdio.h>
#include<string.h>

struct complex{
    int real;
    int img;
};

int main(){
    struct complex number= {5,8};
    struct complex *ptr = & number1;
    printf("real part=%d\n", ptr->real);
    printf("img part= %d\n", ptr->img);
    return 0;
}