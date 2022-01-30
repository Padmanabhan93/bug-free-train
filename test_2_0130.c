#include<stdio.h>

int main() {
 int sal1;
 int sal2;

 puts("enter a per 1 salary :");
 scanf("%i", &sal1);


 puts("enter a per 2 salary :");
 scanf("%i", &sal2);

 printf("per 1 sal=%i\n", sal1);
 printf("per 2 sal=%i\n", sal2);

 if (sal1<sal2) {
     puts("sal2 is greater than sal1:");
 }  

 if(sal2<sal1) {
     puts("sal1 is greater than sal2:");
 } 
 
 return 0;

}