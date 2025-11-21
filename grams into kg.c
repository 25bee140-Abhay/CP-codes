# include<stdio.h>

int main(){

    int kgs, grams;

    printf("enter grams");
    scanf("%d", &grams);

    kgs = grams / 1000;

    printf("kgs = %d\n", kgs);

    return 0;

}
