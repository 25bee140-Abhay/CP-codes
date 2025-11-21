# include<stdio.h>

int main(){

    float principal, rate, time, interest;

    printf("enter principal amount");
    scanf("%f", &principal);

    printf("enter rate of interest");
    scanf("%f", &rate);

    printf("enter time in years");
    scanf("%f", &time);

    interest = principal * rate * time /100;

    printf("interest is equal to %f\n", interest);


    return 0;

}
