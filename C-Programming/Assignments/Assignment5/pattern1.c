// Print a solid square pattern
// Input: n = 4
// Output:

// * * * *
// * * * *
// * * * *
// * * * *

#include<stdio.h>
int main(){

    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1;j<= 4;j++){
              printf("* ");
        }
        printf("\n");
    }
    return 0;
}