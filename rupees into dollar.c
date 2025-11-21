# include<stdio.h>

int main(){

    int dollars, rupees;

    printf("enter rupees");
    scanf("%d", &rupees);

    dollars = rupees/48;

    printf("%d rupees is equal to %d dollars \n", rupees, dollars);

    return 0;


}
