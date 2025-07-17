// Print strong numbers in the given range 1 to n.

#include<stdio.h>
int main(){
    int n,number,sumOfFact;
    printf("Enter the n:");
    scanf("%d",&n);
    printf("Strong Numbers in the given range from 1 to %d are :",n);

    for(int i = 1;i<=n;i++){
        number = i;
        
        int temp = number;
        sumOfFact = 0;
        while(temp >0 ){
            int fact = 1;
            
            int rem = temp % 10 ;
            for(int j = 1;j <= rem;j++){
                fact = fact * j ;
            }
            sumOfFact = sumOfFact + fact;
            temp = temp / 10 ;
        }
    
        if(sumOfFact == number){
            printf("%d ",number);
        }
    }


    return 0;
}