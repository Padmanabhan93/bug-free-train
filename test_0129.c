#include<stdio.h>

int main() {
    float bsal;//g=Gross
    float hrentallo;
    float tallo;
    float dallo;
    float gsal;

    puts("enter a basic salary:");
    scanf("%f", &bsal);

    puts("enter house rent allowence");
    scanf("%f", &hrentallo);

    puts("enter travel allowence");
    scanf("%f", &tallo);

    puts("enter dearness allowence");
    scanf("%f", &dallo);
    
    gsal = bsal + (bsal * hrentallo / 100) + (bsal * tallo / 100) + (bsal * dallo / 100);

    printf("Gross Salary =%f", gsal);
    return 0;

}