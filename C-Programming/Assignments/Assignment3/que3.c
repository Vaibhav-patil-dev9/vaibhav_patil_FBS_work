// Sum of numbers in given range.
// Find sum of numbers from start to end.
// Input: start = 1, end = 5
// Output: 15

#include<stdio.h>
int main(){

    int sum = 0;
    int start , end ;
    printf("Enter the start and end :");
    scanf("%d %d",&start, &end);
    for(int i = start;i<=end;i++){
        sum = sum + i;
    }
    printf("sum of the given range = %d",sum);
    return 0;
}