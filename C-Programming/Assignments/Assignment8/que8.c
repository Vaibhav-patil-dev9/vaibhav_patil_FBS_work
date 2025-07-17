// Merge two arrays

#include <stdio.h>
int main()
{

    int n1, n2;
    printf("Enter size of the array1:");
    scanf("%d", &n1);
    int arr[n1];
    printf("Enter the %d elements in the first array:", n1);
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter size of the array2:");
    scanf("%d", &n2);

    int brr[n2];

    int crr[n1+n2];

    printf("Enter the %d elements in the second array:", n2);
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &brr[i]);
    }

    for (int i = 0; i < n1; i++)
    {
        crr[i] = arr[i];
    }
    for(int i = 0;i<n2;i++)
    {
        crr[n1+i] = brr[i];
    }
    printf("Merged Array is :");
    for(int i = 0; i<n1+n2;i++)
    {
        printf("%d ",crr[i]);
    }
    return 0;
}