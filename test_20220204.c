#include<stdio.h>

int main() {

    int year;
    puts("enter a year");
    scanf("%i", &year);

    if ( year % 4 == 0 && year % 100 !=0 || year % 400 ==0 ) {
        puts(" Its is a leap year");
    } else {
        puts(" Its is a common year");
    }
    return 0;
    
}