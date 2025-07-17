// Accept a number and check if it is divisible by 3, 5, or both.
// (Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
// both" or” Divisible by None”)

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number to check divisibility:");
    scanf("%d", &num);

    if(num%3 == 0 && num%5 == 0){
        printf("Divisible by 3 and 5.");
    }
    else if(num%3 == 0 && num%5 != 0){
        printf("Divisible by 3 not by 5.");
    }
    else if(num%3 != 0 && num%5 == 0){
        printf("Divisible by 5 not by 3.");
    }
    else
        printf("Divisible not by 3 and not by 5.");

    return 0;
}