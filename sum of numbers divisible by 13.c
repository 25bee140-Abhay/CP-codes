# include<stdio.h>

int main(){

    int i, sum;

    for(i=1; i<=100; i++){

        if(i%13==0){
            sum = sum + i;
        }
    }

    printf("sum of numbers divisible by 13 is: %d\n", sum);

    return 0;
}


