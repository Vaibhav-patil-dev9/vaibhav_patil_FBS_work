// Check the given number is Perfect number or not.
// Input: n = 28
// Output: Perfect

#include<stdio.h>
int main(){

    int number;
    int sum = 1;
    printf("Enter the number:");
    scanf("%d",&number);

    

    for(int i=2;i < number; i++){
        if(number % i == 0){
            sum = sum + i ;
        }
    }
    if(number == sum){
        printf("The number is perfect.");
    }
    else{
        printf("number is not perfect.");
    }
    return 0;
}