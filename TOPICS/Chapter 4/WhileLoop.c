// Question ==> Print Numbers From 0 to n(User Input) using While Loop

#include<stdio.h>
int main(){
    int n;4
    printf("enter number:");
    scanf("%d" , &n);

    int i=0;
    while(i<=n){
        printf("%d \n", i);
        i++;
    }
    return 0;
}