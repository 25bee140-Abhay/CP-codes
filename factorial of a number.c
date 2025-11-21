# include<stdio.h>

int main(){

    int n, i, factorial=1;

    printf("enter any number n: ");
    scanf("%d", &n);

    if(n<0){
        printf("factorial of negative interget doesn't exist \n");
    }
    else {
            for (i=1; i<=n; i++){

                factorial=factorial*i;
            }
        printf("the factorial of %d is: %d\n", n, factorial);
    }
    return 0;
}
