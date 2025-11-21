# include<stdio.h>

int main(){

    float netsale, grosssale, discount;

    printf("enter grosssale");
    scanf("%f", &grosssale);

    discount = 0.1 * grosssale;

    netsale = grosssale - discount;

    printf("netsale = %f\n", netsale);

    return 0;

}
