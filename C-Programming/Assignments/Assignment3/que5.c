// Check the given number is Armstrong number or not..
// Input: n = 153
// Output: Armstrong

#include<stdio.h>
int main(){
    int number,temp , sum = 0,rem,digits = 0;
    printf("Enter the number:");
    scanf("%d",&number);
    
    temp = number;
    while(temp>0){
        digits++ ;
        temp = temp / 10;
    }
    
    temp = number;

    while(temp>0){
        rem = temp % 10;
        int power = 1;
        for(int j=1;j<=digits;j++){
            power = power * rem;
        }
        sum = sum + power;
        
        temp = temp /10;
    }
    if(sum == number){
        printf("Armstrong number.");
    }
    else{
        printf("Not Armstrong.");
    }

    return 0;
}