// Write a program to check whether a person is eligible to vote (age ≥ 18).

#include<stdio.h>
int main(){

    int age;
    printf("Enter the age:");
    scanf("%d", &age);

    if(age > 0 && age >= 18){
        printf("person is eligible for vote.");
    }
    else
        printf("person is not eligible for vote.");
    return 0;
}