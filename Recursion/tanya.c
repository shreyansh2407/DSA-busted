#include<stdio.h>
#include<math.h>
int main(){
    double principal,rate,time,amount;
    double CI;
    printf("Enter the principal amount:");
    scanf("%lf",&principal);
    printf("Enter the rate of interest:");
    scanf("%lf",&rate);
    printf("Enter the rime (in years):");
    scanf("%lf",&time);
    double first_part = 1+rate/100;
    double second_part = pow(first_part,time);
    amount = principal*second_part;
    CI  = amount-principal;
    printf("Your amount is %lf and your compound interst is %lf.",amount,CI);
    return 0;
}