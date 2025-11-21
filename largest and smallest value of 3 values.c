# include<stdio.h>

int main(){

    int num1, num2, num3;

    printf("enter num1");
    scanf("%d", &num1);

    printf("enter num2");
    scanf("%d", &num2);

    printf("enter num3");
    scanf("%d", &num3);

    int largest, smallest;

    if (num1 >= num2 && num1 >= num3){
       largest = num1;
    }
    else if (num2 >= num3 && num2 >= num1){
        largest = num2;
    }

    else
        largest = num3;


        if(num1 <= num2 && num1 <= num3){
            smallest = num1;
        }
        else if(num2<= num1 && num2 <= num3){
            smallest = num2;
        }
        else {
            smallest = num3;
        }

        printf("largest is %d\n", largest);
        printf("smallest is %d\n", smallest);

        return 0;


}
