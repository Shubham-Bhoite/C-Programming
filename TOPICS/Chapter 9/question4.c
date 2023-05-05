// Question ==> Make structure to store bank account information of customer of ABC bank . also, make an alias for it.


#include<stdio.h>
#include<string.h>

typedef struct bankaccount{
    int accountno;
    char name[100];
} acc;

int main(){
    acc acc1 = {123,"shubham"};

    printf("acc no= %d", acc1.accountno);
    printf("name= %s", acc1.name);
    return 0;
}