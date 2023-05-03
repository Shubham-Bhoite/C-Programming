// Question ==> Create string firstName & lastName to store details of user & print all the characters using a loop?


#include<stdio.h>

void printstring(char arr[]);

int main(){
    char firstName[]="Shubham";
    char lastName[]="Bhoite";

    printstring (firstName);
    printstring (lastName);
    return 0;
}

void printstring (char arr[]){
    for (int i=0; arr[i] !='\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}