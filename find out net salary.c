#include <stdio.h>

int main() {
    float gross_salary, allowances, deductions, net_salary;

    //input gross_salary
    printf("Enter gross_salary: ");
    scanf("%f", &gross_salary);

    //calculate allowances and deductions using if conditions
    if (gross_salary > 10000) {
        allowances = 0.10 * gross_salary;
        deductions = 0.03 * gross_salary;
    }
    else if (gross_salary > 5000) {
        allowances = 0.07 * gross_salary;
        deductions = 0.02 * gross_salary;
    }
    else {
         allowances = 0.05 * gross_salary;
         deductions = 0.01 * gross_salary;
    }

    //calculate net_salary
    net_salary = gross_salary + allowances - deductions;

    //display result
    printf("Net Salary = %.2f\n", net_salary);

    return 0;
}
