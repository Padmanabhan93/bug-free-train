#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("unsigned Ranges:\n");
    printf("max char value =%u\n", UCHAR_MAX);
    printf("max short int value =%u\n", USHRT_MAX);
    printf("max int value =%u\n", UINT_MAX);
    printf("max long value =%u\n", ULONG_MAX);

    printf("Singned ranges:\n");
    printf("max short int value =%i\n", SHRT_MAX);
    printf("min short int value =%i\n", SHRT_MIN);

    printf("max int value =%i\n", INT_MAX);
    printf("min int value =%i\n", INT_MIN);

    printf("min long int value =%i\n", LONG_MIN);
    printf("max long int value =%i\n", LONG_MAX);

    printf("\nfloat, double and long double\n");
    printf("max float value = %g\n", FLT_MAX);
    printf("min float value = %g\n", FLT_MIN);
    printf("Max double value = %g\n", DBL_MAX);
    printf("Min double value = %g\n", __DBL_MIN__);
    printf("Mix long double value = %g\n", LDBL_MAX);
    printf("Min long double value = %g\n", LDBL_MIN);

    puts("memory sizes and data types\n");
    printf("char =%i bytes\n", sizeof(char));
    printf("short int =%i bytes\n", sizeof(short));
    printf("int =%i bytes\n", sizeof(int));
    printf("long int =%i bytes\n", sizeof(long));
    printf("float =%i bytes\n", sizeof(float));
    printf("double =%i bytes\n", sizeof(double));


    return 0;
}