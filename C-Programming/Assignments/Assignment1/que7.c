// Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
// 10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
// respectively.

#include<stdio.h>
int main(){

    double salary ;
    double ta, da ,hra , new_salary;
    printf("Enter salary :" );
    scanf("%lf" , &salary);

    if(salary <=5000){
        da = (10.0/100) * salary ;
        ta = (20.0/100) * salary ;
        hra = (25.0/100)* salary ;
        
    }
    else{
        da = (15.0/100) * salary ;
        ta = (25.0/100) * salary ;
        hra = (30.0/100)* salary;
        
    }
    new_salary = salary + ta + da + hra ;

    printf("DA = %lf\n" , da);
    printf("TA = %lf\n" , ta);
    printf("HRA = %lf\n" , hra);
    printf("Totat salary of the employee  = %lf\n" , new_salary);
    return 0;
}