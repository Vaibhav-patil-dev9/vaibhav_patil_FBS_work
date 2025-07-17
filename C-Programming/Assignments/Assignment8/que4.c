// Find odd and even among the numbers. 

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
    printf("Even numbers in the array is :");
    for(int i = 0; i < n;i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\nOdd numbers in the array is :");
    for(int i = 0; i < n;i++)
    {
        if(arr[i] % 2 != 0)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}