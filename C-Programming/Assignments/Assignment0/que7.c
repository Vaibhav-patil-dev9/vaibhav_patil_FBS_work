// Write a C program to convert given minutes into hours and remaining minutes.

#include<stdio.h>
void main(){
    int minutes = 450;
    int hours = minutes / 60 ;
    int remaining_minutes = 450 % 60 ;

    printf("time in hours = %d hours and %d minutes",hours,remaining_minutes);
}