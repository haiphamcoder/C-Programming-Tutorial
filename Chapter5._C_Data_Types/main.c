#include <stdio.h>
#include <float.h>

int main()
{
    printf("Storage size for int: %ld bytes\n", sizeof(int));
    printf("Storage size for float : %ld bytes\n", sizeof(float));
    printf("Minimum float positive value: %E\n", FLT_MIN);
    printf("Maximum float positive value: %E\n", FLT_MAX);
    printf("Precision value: %d decimal places\n", FLT_DIG);
    return 0;
}