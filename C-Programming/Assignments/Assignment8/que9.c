// 9. Reverse the given array.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of Array:");
    scanf("%d",&n);

    int arr[n];
    // int brr[n];
    printf("Enter the  elements in the array:");
    for(int i = 0; i<n;i++){
        scanf("%d",&arr[i]);
    }

    

    // for(int i = 0;i < n; i++){
    //     brr[i] = arr[n-1-i];
    // }

    int start = 0 ;
    int end = n-1;
    for(int i = 0;i<=n/2;i++)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end]= temp;
        start++;
        end--;
    }
    printf("Reverse array is : ");
    for(int i = 0; i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}