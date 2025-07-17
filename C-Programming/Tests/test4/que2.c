// write a program to find of any number.
#include<stdio.h>
int findPower(int ,int);

int main()
{
    int base, power;
    printf("Enter the base and power:");
    scanf("%d",&base);
    scanf("%d",&power);

    power = findPower(base,power);
    printf("Power = %d",power);

    return 0;
}
int findPower(int base , int power)
{
    int result = 1;
    for(int i = 1;i<= power;i++)
    {
        result = result * base ;
    }
    return result;
}