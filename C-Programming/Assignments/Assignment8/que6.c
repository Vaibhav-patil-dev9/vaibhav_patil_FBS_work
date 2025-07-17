// Accept array and print only prime numbers of array.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of the array:");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the %d elements in the array:", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int number, flag;

    printf("The prime numbers in the given array:");
    for (int i = 0; i < n; i++)
    {
        number = arr[i];
        flag = 0;

        for (int j = 2; j < number; j++)
        {
            if (number % j == 0)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            printf("%d ", number);
        }
    }
    return 0;
}