// Write a C program to find the area of a circle.

#include<stdio.h>
void main(){

    double area;
    int radius = 4;
    float pi =3.14;

    area = pi * radius * radius;

    printf("Area of the circle = %lf",area);
}