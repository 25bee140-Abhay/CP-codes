 # include<stdio.h>

int main(){

    float bytes, kb, mb, gb;

    printf("enter bytes :");
    scanf("%f", &bytes);

    kb = bytes/1024;
    mb = kb/1024;
    gb = mb/1024;

    printf("kb = %f\n", kb);
    printf("mb = %f\n", mb);
    printf("gb = %f\n", gb);


    return 0;

}
