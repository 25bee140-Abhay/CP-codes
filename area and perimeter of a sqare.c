# include<stdio.h>

int main(){

    int length, area, perimeter;

    printf("enter length");
    scanf("%d", &length);

    area = length * length;
    perimeter = 4 * length;

    printf("area = %d\n", area);
    printf("perimeter = %d\n", perimeter);


    return 0;

}
