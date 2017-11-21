#include <stdio.h>

#define MAX_LEN 100

void selection_sort(int a[], int n);

int main(void) {

    int i, c, n, a[MAX_LEN];
    printf("Enter list of integers to be sorted: ");
    for (i = 0, n = 0; i < MAX_LEN; i++) {
        scanf(" %d", &a[i]);
        n++;
        if ((c = getchar()) == '\n') /* ungetc() not yet covered,    */
            break;                   /* but used to put the non-'\n' */
        ungetc(c, stdin);            /* char back to be re-read.     */
    }

    selection_sort(a, n);
    
    printf("Sorted list:");
    for (i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }
    printf("\n");

    return 0;
}

void selection_sort(int a[], int n) {

    if (n == 0) return;

    int i, temp, largest = 0;

    for (i = 0; i < n; i++) {
        if (a[i] > a[largest])
            largest = i;
    }

    temp = a[largest];
    a[largest] = a[n-1];
    a[n-1] = temp;

    selection_sort(a, n-1);
}
