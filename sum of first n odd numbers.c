# include<stdio.h>

int main(){

    int n, i, sum;

    printf("enter any number n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){

        sum = sum + (2*i-1);
    }

    printf("sum of firt %d odd numbers is: %d\n", n, sum);

    return 0;
}
