#include <stdio.h>

int polynomial(int x);

int main(void) {

    int x;
    
    printf("Enter an integer: ");
    scanf("%d", &x);
    printf("Result: %d\n", polynomial(x));
    
    return 0;
}

int polynomial(int x) {

    return 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x 
           + 7 * x - 6;
}
