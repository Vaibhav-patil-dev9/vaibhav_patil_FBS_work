// Write a program to check whether a given character is uppercase or lowercase.

#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character:");
    scanf("%c", &ch);

    //To know the ranges ......


    // char A,Z,a,z;
    // A = 'A';
    // Z = 'Z';
    // a = 'a';
    // z = 'z';
    // printf("ASCII range for A to Z is %d to %d \n",'A','Z');
    // printf("ASCII range for a to z is %d to %d \n",'a','z');

    if(ch >= 65 && ch <= 90){
        printf("The character %c is in uppercase.",ch);
    }
    else if(ch >= 97 && ch <= 122){
        printf("The character %c is in lowercase.",ch);
    }
    else 
        printf("The character %c is not alphabet letter.",ch);

    return 0;
}