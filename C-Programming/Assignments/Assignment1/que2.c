// Write a program to check given 3 digit number is pallindrome or not.

#include<stdio.h>
int main(){
    int num , reverse_number,oneth, tenth,hundredth;
    printf("Enter the 3 digit number :");
    
    scanf("%d", &num);
    int temp = num;
    oneth=num%10;
    num=num/10;
    tenth=num%10;
    num=num/10;
    hundredth=num%10;

    reverse_number = (oneth*100 + tenth * 10 + hundredth); 
    printf("reverse_number = %d\n",reverse_number);

    if(temp == reverse_number){
        printf("%d is palindrome ",temp);
    }
    else
        printf("%d is not palindrome ",temp);
    

    return 0;
}