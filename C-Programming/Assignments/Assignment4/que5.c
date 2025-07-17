// 5. Write a menu driven program to take a number for user and perform operations as follows.

// Press 1.To check number is even or odd.
// 2.To check number is prime or not.
// 3.To check number is pallindrome or not.
// 4.To check number is positive, negative or zero.
// 5.To reverse a number.
// 6.To find sum of digits.

#include <stdio.h>
int main()
{

    int ch, number;
    printf("Enter the number:");
    scanf("%d", &number);
    printf("************** Select Option:\n");

    printf("1.To check number is even or odd.\n");
    printf("2.To check number is prime or not.\n");
    printf("3.To check number is pallindrome or not.\n");
    printf("4.To check number is positive, negative or zero.\n");
    printf("5.To reverse a number.\n");
    printf("6.To find sum of digits.\n");

    printf("Enter the choice:");
    scanf("%d", &ch);

    if (ch == 1)
    {
        if (number % 2 == 0)
        {
            printf("Number is Even.");
        }
        else
            printf("Number is Odd.");
    }
    else if (ch == 2)
    {
        int flag = 0;
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                flag++;
                break;
            }
        }
        if (flag == 0)
        {
            printf("number is prime.");
        }
        else
        {
            printf("Number is not prime");
        }
    }
    else if (ch == 3)
    {
        int temp = number;
        int reversedNumber = 0;

        while (temp > 0)
        {
            int rem;
            rem = temp % 10;
            reversedNumber = reversedNumber * 10 + rem;
            temp = temp / 10;
        }
        // printf("%d", reversedNumber);
        if (reversedNumber == number)
        {
            printf("Number is palindrome");
        }
        else
            printf("Number is not palindrome");
    }
    else if (ch == 4)
    {
        if(number == 0){
            printf("Number is zero.");
        }
        else if(number > 0)
        {
            printf("Number is positive.");
        }
        else
        {
            printf("Number is negative");
        }
    }
    else if (ch == 5)
    {
        int rem ,reverseNumber = 0;
        int temp = number;
        while (temp > 0)
        {
            rem = temp % 10 ;
            reverseNumber = reverseNumber * 10 + rem;    
            temp = temp / 10 ; 
        }

        printf("Reverse Number = %d",reverseNumber);
        
    }
    else if (ch == 6)
    {
        int rem ,sum = 0;
        int temp = number ;
        while (temp > 0)
        {
            rem = temp % 10 ;
            sum = sum + rem ; 
            temp = temp / 10 ;
        }
        printf("Sum of the Digits is = %d",sum);
    }
    else
    {
        printf("Invalid option:!! please Enter valid option.");
    }

    return 0;
}