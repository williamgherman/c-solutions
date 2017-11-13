#include <stdio.h>

int main(void) {

    printf("%lu, %lu, %lu, %lu, %lu, %lu\n", 
           (unsigned long) sizeof(int), (unsigned long) sizeof(short),
           (unsigned long) sizeof(long), (unsigned long) sizeof(float),
           (unsigned long) sizeof(double), (unsigned long) sizeof(long double));

    return 0;
}
