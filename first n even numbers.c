# include<stdio.h>
int main(){

    int n, i;
    printf("enter any even number: ");
    scanf("%d", &n);

    printf("first %d even natural numbers are :\n", n);

    for(i=0; i<n; i++)
        {
        printf("%d \n", 2*i);

    }
    return 0;

}
