#include<stdio.h>

int main() {
    int year;

    puts ("enter a year:");
    scanf("%i", &year);

    if ( year %4 !=0){
        puts("common year");
    } else if ( year %100 !=0){
        puts("leap year");
    } else if ( year %400 !=0){
        puts("common year");
    } else {
        puts("leap year");
    }

    return 0;
}