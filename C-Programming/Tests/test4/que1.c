//write a program to print factors of number in given range.
#include<stdio.h>
void findFactors(int , int);
int main()
{
    int start,end;
    printf("Enter the range (start and end) to find the factors from each numbers:");
    scanf("%d",&start);
    scanf("%d",&end);


    findFactors(start,end);
    return 0;
}
void findFactors(int start,int end)
{

    for(int i = start ;i<= end; i++)
    {
        int number = i;
        printf("%d = ",number);
        for(int i = 1;i<=number;i++)
        {
        
            if(number % i == 0){
                printf("%d,",i);
            }
        }
        printf("\n");
    }
}