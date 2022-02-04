#include<stdio.h>

int main() {
    int a , b ,c ;
    char quit ='N';
    while( quit != 'Y') {
        puts("enter a three numbers");
        scanf("%i %i %i", &a, &b, &c );
        fflush(stdin);
        c = a * b;
        a = b + c;
        c = a + c;
        printf("output is =%i\n", c);
        puts("Really want to Quit? (Y)es / (N)o");
        quit = getchar();
    }
    return 0;
}