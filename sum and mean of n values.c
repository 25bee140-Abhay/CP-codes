# include<stdio.h>
int main(){

    int n, i;
    float num, sum, mean;

    printf("enter the number of values: ");
    scanf("%d", &n);

    printf("enetr %d numbers: \n", n);

    for(i=1; i<=n; i++){
        scanf("%f", &num);

        sum=sum + num;
    }

    mean = sum/n;

    printf("sum = %f\n",sum);
    printf("mean = %f\n",mean);

    return 0;

}
