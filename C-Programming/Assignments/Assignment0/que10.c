// 10. Write a C program to input marks of five subjects, find the total marks, and calculate
// the percentage.

#include<stdio.h>
void main(){

    int math = 87;
    int english = 77;
    int biology = 93;
    int physics = 68;
    int chemistry = 84;

    int total  = math + english  +  biology + physics + chemistry ;
    printf("%d",total);
    float percentage = (float) total / 5 ;

    printf("percentage = %.2f ",percentage);

}