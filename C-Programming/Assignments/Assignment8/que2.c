// 2. Search the given number in array. 

 #include<stdio.h>
int main()
{

    int n;
    printf("Enter size of the array:");
    scanf("%d",&n);
    int arr[n];
    int number;
    int index  = -1;

    printf("Enter the %d elements in the array:",n);
    for(int i = 0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the number that you want to search :");
    scanf("%d",&number);

    for(int i = 0; i<n;i++)
    {
        if(arr[i] == number)
        {
            index = i;
        }
    }
    if(index == -1)
    {
        printf("Number not found.");
    }
    else
        printf("Number is found at index %d.",index);
    return 0;
}