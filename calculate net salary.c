# include<stdio.h>

int main(){

    float netsalary, grosssalary, allowance, deduction;

    printf("enter grosssalary");
    scanf("%f", &grosssalary);

    allowance = 0.1 * grosssalary;
    deduction = 0.03 * grosssalary;

    netsalary = grosssalary + allowance - deduction;

    printf("netsalary = %f\n", netsalary);

    return 0;
}
