#include<stdio.h>

int main() {
int result;
float pathu;
    puts("addition:");
    result = 100 +50;
    printf("100 + 50=%i\n", result);

    puts("multiplication:");
    result = result *1;
    printf("150*1=%i\n", result);

    puts("div:");
    result = 150/3;
    printf("150/3=%i\n", result);

    puts("subt:");
    result = result - 10;
    printf("50-10=%i\n", result);

    puts("mod:");
    result = result % 3;
    printf("%i\n", result);

    puts("div:");
    pathu = result/0.03;
    printf("%g\n", pathu);

    puts("dummy:"); //just for fun my name
    pathu = pathu + 10;
    printf("%g\n", pathu);
    
    puts("new name:");
    pathu = pathu * 1 + 2 / 0.003;
    printf("%g\n", pathu);
            
    return 0;
}