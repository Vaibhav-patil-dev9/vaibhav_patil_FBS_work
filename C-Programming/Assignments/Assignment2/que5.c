// Accept the price from user. Ask the user if he is a student (user may say y or n). If he
// is a student and he has purchased more than 500 than discount is 20% otherwise
// discount is 10%.But if he is not a student then if he has purchased more than 600
// discount is 15% otherwise there is not discount.

#include<stdio.h>
void main(){
    int price;
    printf("What is the price :");
    scanf("%d",&price);
    char ch;
    printf("Are yo student or not(y/n)");
    scanf(" %c", &ch);
    double Discount_price;
    if(ch == 'y'){
        if(price > 500){
            Discount_price = price - (price * 20.0/100) ;
        }
        else{
            Discount_price = price - (price * 10.0/100) ;
        }
    }
    else{
        if(price > 600){
            Discount_price = price - (price * 15.0/100) ;
        }
        else{
            Discount_price = price;
        }
    }
    printf("Price of product after Discount = %.2lf",Discount_price);
}