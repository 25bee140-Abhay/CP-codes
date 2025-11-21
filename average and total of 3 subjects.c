# include<stdio.h>

int main(){

        float subject1, subject2, subject3, total, average;

        printf("enter marks of subject1");
        scanf("%f", &subject1);

        printf("enter marks of subject2");
        scanf("%f", &subject2);

        printf("enter marks of subject3");
        scanf("%f", &subject3);

        total = subject1 + subject2 + subject3;
        average = total / 3;

        printf("total of 3 subjects = %f\n", total);

        printf("average of 3 subjects = %f\n", average);

        return 0;

}
