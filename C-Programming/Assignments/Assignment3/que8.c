// Check the given number is Strong number or not.
// Input: n = 145
// Output: Strong

#include<stdio.h>
int main(){

    int number;
    
    
    int sumOfFact = 0;
    printf("Enter the number.");
    scanf("%d" , &number);
    int temp = number;
    while(temp >0 ){
        int fact = 1;
        int rem = temp % 10 ;
        for(int i = 2;i <= rem;i++){
            fact = fact * i ;
        }
        sumOfFact = sumOfFact + fact;
        temp = temp / 10 ;
    }

    // printf("Sum of fact=%d",sumOfFact);

    if(sumOfFact == number){
        printf("Strong number");
    }else
        printf("Not strong number");
    return 0;
}