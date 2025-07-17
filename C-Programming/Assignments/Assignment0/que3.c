// Write a C program to convert temperature from Celsius to Fahrenheit using the
// formula:
// F = (C *9/5) + 32


#include<stdio.h>
int main(){
    float cels;
    float faren;
    printf("Enter The temperature in celsius ");
    scanf("%f" , &cels);

    faren = (cels * 9/5 ) + 32 ;
    printf("Temperature in faranheit is %f",faren);
    return 0 ;


}