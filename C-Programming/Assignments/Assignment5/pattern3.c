// Print an inverted right-angled triangle pattern
// Input: n = 5
// Output:

// *****
// ****
// ***
// **
// *

#include<stdio.h>
int main(){

    for(int i = 1;i<= 5;i++)
    {
        for(int j = i ; j <= 5;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}