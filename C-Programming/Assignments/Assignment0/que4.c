// Write a C program to swap two numbers using a temporary third variable.

#include<stdio.h>
void main(){
    int num1 = 10;
    int num2 = 20;
    printf("before swap\n");
    printf("num1 = %d  ",num1);
    printf("num2 = %d\n",num2);


    int temp = num1;
    num1  = num2;
    num2 = temp;

    printf("after swap\n");
    printf("num1 = %d  ",num1);
    printf("num2 = %d",num2);




}