// Question ==>  Check if given character is present in string or not.


#include<stdio.h>
#include<string.h>

void checkchar(char str[], char ch);

int main(){
    char str[]="ParikramaCollege";
    char ch='m';
    checkchar(str,ch);
}

void checkchar(char str[], char ch){
    for (int i=0; str[i] !='\0'; i++){
    if (str[i]==ch){
        printf("character is present !");
        return ;
    }
}
printf("character is NOT present");
}