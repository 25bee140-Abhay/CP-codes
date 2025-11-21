# include<stdio.h>
int main(){

    int n, i;
    float num, sum, mean;

    printf("enetr 10 numbers: \n");

    for(i=1; i<=10; i++){
        scanf("%f", &num);

        sum=sum + num;
    }

    mean = sum/10;

    printf("sum = %f\n",sum);
    printf("mean = %f\n",mean);

    return 0;

}
