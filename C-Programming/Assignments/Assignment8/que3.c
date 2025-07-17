// Find sum of all numbers. 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of the array:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the %d elements in the array:",n);
    for(int i = 0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int sum = 0;
    for(int i = 0; i<5;i++){
        sum = sum + arr[i];
    }
    printf("Sum of element in the array:%d\n",sum);
    return 0;
}