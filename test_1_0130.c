#include<stdio.h>

int main() {
    float a , b , c , d ;
    float e ;

    puts("enter the value of a  b  c  d :");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    e = (a*b)+c-d;
     

    printf("final result=%.7f", e);
    return 0;
    

}