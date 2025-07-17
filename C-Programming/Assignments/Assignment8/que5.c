// Print alternate elements in array.

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
    printf("alternate numbers in the array are:");
    for(int i = 0;i<n; i= i+2)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}