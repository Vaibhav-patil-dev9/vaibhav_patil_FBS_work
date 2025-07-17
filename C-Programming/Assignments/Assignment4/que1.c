// Print armstrong numbers in the given range 1 to n.

#include<stdio.h>
int main(){

    int n,number,sum,rem,digits,temp;
    printf("Enter the n:");
    scanf("%d",&n);
    printf("The armstrong numbers in the given range 1 to %d are :",n);
    for(int i = 1;i <= n; i++){
        number = i;
        sum = 0;
    
        digits = 0;
        temp = number;
        while(temp>0){
            digits++ ;
            temp = temp / 10;
        }
        temp = number;

        while(temp>0){
            rem = temp % 10;
            int power = 1;
            for(int j = 1;j<=digits;j++){
                power= power * rem;
            }
            sum = sum + power;
        
            temp = temp /10;
        }
        if(sum == i){
            printf("%d ",i);
        }
    }
    return 0;
}