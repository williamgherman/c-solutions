#include <stdio.h>

int main(void) {

    int n = 0;

    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    printf("The reversal is: %d%d\n", n % 10, n / 10);
    
    /*
    Here is another solution for the same problem
    
    int n1,n2;

    printf("Enter a two digit number: ");
    scanf("%1d%1d",&n1,&n2);

    printf("The reversal is %1d%1d\n",n2,n1);
    
    
    */

    return 0;
}
