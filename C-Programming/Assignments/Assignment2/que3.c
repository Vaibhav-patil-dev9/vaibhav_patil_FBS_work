// Write a program to find greatest of three numbers using nested if-else.

#include<stdio.h>
void main(){
    int num1 = 10;
    int num2 = 50;
    int num3 = 30;

    if(num1 > num2){
        if(num1 > num3){
            printf("Number 1 is the greatest");
        }
        else{
            printf("Number 3 is greatest");
        }

    }
    else {
        if(num2 > num3){
            printf("Number 2 is greatest");
        }
        else{
            printf("Number 3 is greatest ");
        }
    }
}
