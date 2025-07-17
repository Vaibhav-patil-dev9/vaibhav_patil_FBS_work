// Accept three sides of a triangle from the user and determine whether the triangle is
// equilateral, isosceles, or scalene.

#include<stdio.h>
int main(){

    int side1,side2,side3;
    printf("Enter the sides of triangle :\n");
    printf("Enter the side 1 , side 2 and side 3:");
    scanf("%d %d %d", &side1,&side2, &side3);

    if(side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1){
        if(side1 == side2 && side2 == side3){
            printf("Triangle is equilateral");
        }
        else if(side1 == side2 || side1 == side3 || side2== side3){
            printf("Triangle is isosceles:");
        }
        else
            printf("Triangle is scalene:");
    }

    else
        printf("sides not form valid tringle");
 
    return 0;

}

