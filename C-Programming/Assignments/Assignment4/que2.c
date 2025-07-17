// Print prime numbers in the given range 1 to n.

 #include<stdio.h>
 int main(){
    int n,number,flag;

    printf("Enter the n:");
    scanf("%d",&n);
    printf("The prime numbers in the given range from 1 to %d are :",n);
    for(int i = 1;i<= n;i++){
        number = i;
        flag = 0;

        for(int j = 2;j<number;j++){
            if(number % j == 0){
                flag = 1;
            }
        }
        if(flag == 0){
            printf("%d ",number);
        }
    }
    return 0;
}