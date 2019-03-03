#include <stdio.h>
#include <limits.h>

int main (void) {
    printf("max signed char : %25d | %25d unsigned\n",
            SCHAR_MAX, UCHAR_MAX);
    printf("min signed char : %25d | %25d unsigned\n",
            SCHAR_MIN, 0);
    printf("max signed short: %25d | %25d unsigned\n",
            SHRT_MAX, USHRT_MAX);
    printf("min signed short: %25d | %25d unsigned\n",
            SHRT_MIN, 0);
    printf("max signed int  : %25d | %25u unsigned\n",
            INT_MAX,   UINT_MAX);
    printf("min signed int  : %25d | %25d unsigned\n",
            INT_MIN, 0);
    printf("max signed long: %25ld | %25lu unsigned\n",
            LONG_MAX,  ULONG_MAX);
    printf("min signed long: %25ld | %25d unsigned\n",
            LONG_MIN, 0);
    return 0;
}
