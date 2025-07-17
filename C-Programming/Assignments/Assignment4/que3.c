// Print perfect numbers in the given range 1 to n.
#include<stdio.h>
int main(){

    int n,number;
    printf("Enter the n:");
    scanf("%d",&n);
    printf("perfect numbers in the given range are from 1 to %d are :",n);
    for(int i = 1 ;i<= n;i++){
        number = i;
        int sum = 1;
        

        for(int j = 2;j<number;j++){
            if(number % j == 0){
                sum = sum + j;
            }
        }
        if(sum == number){
            printf("%d ",number);
        }
    }
    return 0;
}