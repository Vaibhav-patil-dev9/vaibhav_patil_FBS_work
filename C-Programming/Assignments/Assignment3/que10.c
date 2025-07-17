// Find Sum of first and last digit of given number.
// Input: n = 12345
// Output: 6 (1 + 5)

#include<stdio.h>
int main(){

    int number , last_Digit, first_digit;
    int sum;
    printf("Enter number:");
    scanf("%d",&number);

    last_Digit = number % 10 ;
    // for first figit

    while(number > 10){
        number = number / 10 ;
    }
    first_digit = number;
    sum = first_digit + last_Digit ;
    printf("Sum of First digit and last digit = %d",sum);
    return 0;
}