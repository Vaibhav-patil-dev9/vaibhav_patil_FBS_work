// 1. find minimum and maximum number in the array.

#include<stdio.h>
int main(){
    int n;
    printf("Enter size of the array:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the %d elements in the array:",n);
    for(int i = 0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int i = 0;
    int min = arr[i];
    int max = arr[i];

    for(i = 0 ; i<n;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Minimum element in the array is:%d\n",min);
    printf("Maximum element in the array is:%d",max);
    return 0;
}