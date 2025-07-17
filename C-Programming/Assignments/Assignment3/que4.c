// Check the given number is prime or not.
// Input: n = 7
// Output: Prime

#include<stdio.h>
int main(){

    int number;
    int flag = 0;
    printf("Enter the number:");
    scanf("%d",&number);
    for(int i = 2;i<number;i++){
        if(number % i==0){
            flag++;
            break;
        }

    }
    if(flag==0){
        printf("number is prime.");
    }
    else{
        printf("Number is not prime");
    }
    return 0;
}