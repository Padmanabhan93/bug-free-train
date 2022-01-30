#include<stdio.h>

int main() {
    int a , b , c , d;
    puts("enter the value of a :");
    scanf("%i", &a);
    puts("enter the value of b :");
    scanf("%i", &b);
    puts("enter the value of c :");
    scanf("%i", &c);
    puts("enter the value of d :");
    scanf("%i", &d);

    a = a+b+c+d;

    printf("final result=%i", a);
    return 0;
    

}