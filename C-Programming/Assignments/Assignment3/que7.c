// Find factorial of given number.
// Input: n = 5
// Output: 120

#include<stdio.h>
int main(){

    int  number;
    int fact = 1;
    printf("Enter the number :");
    scanf("%d",&number);
    for(int i = 2;i<=number;i++){
        fact = fact * i;
    }
    printf("The factorial number is = %d",fact);
    return 0;
}