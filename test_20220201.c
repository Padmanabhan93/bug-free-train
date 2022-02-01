#include<stdio.h>

int main() {
    char  pa;
    puts(" enter a character");
    pa = getchar();

    if ( pa >= 65  &&  pa <= 90) {
        puts("given char is a capital letter");
    } else if ( pa >= 97 &&  pa  <= 122) {
        puts("given char is a small letter");
    } else if ( pa >= 48 &&  pa <= 57) {
        puts("given char is a number");
    } else {
        puts("given char is a symbel");
    }
    return 0;

}