# include<stdio.h>

int main(){

    int kgs, grams;

    printf("enter kgs");
    scanf("%d", &kgs);

    grams = kgs * 1000;

    printf("grams = %d\n", grams);

    return 0;

}
