# include<stdio.h>

int main(){

    int num1, num2;

    printf("enter num1");
    scanf("%d", &num1);

    printf("enter num2");
    scanf("%d", &num2);

    if (num1 > num2){
        printf("largest is %d\n", num1);
        printf("smaller is %d\n", num2);
    }
    else if (num2 > num1){
        printf("larger is %d\n", num2);
        printf("smaller is %d\n", num1);
    }

    else
        printf("numbers are equal");

        return 0;


}
