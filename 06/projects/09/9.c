#include <stdio.h>

int main(void) {

    float loan = 0.0f,
          rate = 0.0f,
          payment = 0.0f;

    int numberOfPayments = 0;
    
    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    printf("Enter number of payments: ");
    scanf("%d",&numberOfPayments);

    int counter = 1;
    
    while (counter <= numberOfPayments) {
    
        loan = loan - payment + (loan * rate / 100.0 / 12.0);
        
        if (loan > 0) printf("Balance remaining after %d payment: $%.2f\n",counter, loan);
        
        else break;
        
        counter++;
        
    }
    

    return 0;
}
