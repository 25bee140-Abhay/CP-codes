# include<stdio.h>

int main(){

    float fehrenhite, celcius;

    printf("enter fehrenhite :");
    scanf("%f", &fehrenhite);

    celcius = 5.0/9.0 * (fehrenhite - 32);

    printf("celcius is equal to : %f\n", celcius);

    return 0;

}
