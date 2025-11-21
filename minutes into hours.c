# include<stdio.h>

int main(){

    int hours, minutes;

    printf("enrter minutes");
    scanf("%d", &minutes);

    hours = minutes / 60;

    printf("%d minutes is equal to %d hours \n", minutes, hours);

    return 0;


}
