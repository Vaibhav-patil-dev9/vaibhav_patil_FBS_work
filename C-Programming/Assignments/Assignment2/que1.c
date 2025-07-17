// Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
// desired operations.

#include<stdio.h>
void main(){
    int num1 , num2 ;
    char ch ;
    printf("Enter the number1 and Number2 :");
    scanf("%d %d" , &num1 ,&num2 );
    printf("Enter operator (+,-,/,*,mod):");
    scanf(" %c",&ch);

    if(ch == '+'){
        int sum = num1 + num2 ;
        printf ("The addition of number 1 and number 2 = %d",sum);
    }
    else if (ch == '-'){
        int sub = num1 - num2 ;
        printf ("The Subtraction of number 1 and number 2 = %d",sub);
    }
    else if (ch == '*'){
        int mult = num1 * num2 ;
        printf ("The multiplication of number 1 and number 2 = %d",mult);
    }
    else if (ch == '/'){
        int div = num1 / num2 ;
        printf ("The division of number 1 and number 2 = %d",div);
    }
    else if (ch == '%'){
        int mod = num1 % num2 ;
        printf ("The modulus of number 1 and number 2 = %d",mod);
    }
    else{
        printf("Invalid operator");
    }

}