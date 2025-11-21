# include<stdio.h>

int main(){

    float celcius, fehrenhite;

    printf("enter celcius");
    scanf("%f", &celcius);

    fehrenhite = (9.0/5.0 * celcius) + 32;

    printf("fehrenhite is equal to = %f\n", fehrenhite);

    return 0;

}
