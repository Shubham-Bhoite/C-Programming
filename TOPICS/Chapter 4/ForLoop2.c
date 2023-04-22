// Question==> Print the table of number input by the user?

#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d", &n);

    for (int i=1; i<=10; i++){
        printf("%d \n", n*1);
    }
    return 0;
}