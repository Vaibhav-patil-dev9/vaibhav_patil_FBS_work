// Take two array and add sum in third array
// Examplearr[5]= {1,2, 3, 4,5}
// brr[5]={10,20,30, 40, 50}
// crr[5]={11,22,33,44,55}

#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of the array:");
    scanf("%d", &n);
    int arr[n];
    int brr[n];
    int crr[n];

    printf("Enter the %d elements in the first array:", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the %d elements in the second array:", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &brr[i]);
    }

    for(int i = 0; i<n;i++)
    {
        crr[i] = arr[i] + brr[i];
    }
    printf("sum of aaray:");

    for(int i= 0;i<n;i++)
    {
        printf("%d ",crr[i]);
    }
    return 0;
}