#include<stdio.h>

int main() {
    int day;
    puts("enter a number between 1 to 7");
    scanf("%i", &day);

    if (day == 1) {
        puts("monday");
    } else if (day == 2) {
        puts("tuesday");
    } else if ( day == 3) {
        puts("wednesday");
    } else if ( day == 4) {
        puts("thrsday");
    } else if ( day == 5) {
        puts("friday");
    } else if ( day == 6) {
        puts("saturday");
    } else if ( day == 7) {
        puts("sunday");
    } else {
        puts("you have entered invalid command");
    }

    return 0;

}