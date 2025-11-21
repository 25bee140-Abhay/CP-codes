# include<stdio.h>

int main(){

    int height, length, area;

    printf("enter height");
    scanf("%d", &height);

    printf("enter length");
    scanf("%d", &length);

    area = (height * length) / 2;

    printf("area of triangle = %d\n", area);

    return 0;

}
