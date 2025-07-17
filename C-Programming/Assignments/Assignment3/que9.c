// Check the given number is Palindrome number or not.
// Input: n = 121
// Output: Palindrome

#include<stdio.h>
int main(){
    int number;
    printf("Enter the number.");
    scanf("%d" , &number);
    int temp = number;
    int reversedNumber = 0;
    
    while(temp > 0){
        int rem;
        rem = temp % 10 ;
        reversedNumber = reversedNumber * 10 + rem ;
        temp =  temp / 10 ;
    }
    // printf("%d", reversedNumber);
    if(reversedNumber == number){
        printf("Number is palindrome");
    }else
        printf("Number is not palindrome");
    return 0;
}