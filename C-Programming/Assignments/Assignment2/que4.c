// Ask the user to enter marks.
// Then show the result based on these rules:
// If marks are more than 75 → show "Distinction"
// If marks are more than 65 → show "First Class"
// If marks are more than 55 → show "Second Class"
// If marks are 40 or more → show "Pass Class"
// If marks are less than 40 → show "Fail"

#include<stdio.h>
int main(){

    int marks;
    printf("Enter the Marks :");
    scanf("%d", &marks);

    if(marks >=0 && marks <= 100){
        if(marks >= 75){
            printf("Distinction");  
        }
        else if(marks >= 65 && marks <75){
            printf("first class");

        }
        else if(marks >= 55 && marks < 65){
            printf("second class");

        }
        else if(marks >= 40 && marks < 55){
            printf("pass");

        } 
        else 
            printf("fail");
    }
    else
        printf("Enter valid marks.");
    
    return 0;
    
}