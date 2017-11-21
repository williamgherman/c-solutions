#include <stdio.h>

void create_magic_square(int n, char square[n][n]);
void print_magic_square(int n, char square[n][n]);

int main(void) {

    int n;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    char square[n][n];
    
    create_magic_square(n, square);
    print_magic_square(n, square);

    return 0;
}

void create_magic_square(int n, char square[n][n]) {
 
    int x, y, x_last, y_last, count;

    for (x = 0; x < n; x++) {
        for (y = 0; y < n; y++) {
            square[x][y] = 0;
        }
    }

    x = n / 2; 
    y = 0;
    square[x][y] = 1;

    count = 2;
    while (count <= n * n) {
        
        x_last = x;
        y_last = y;

        if (x_last + 1 >= n)
            x = 0;
        else 
            x = x_last + 1;
        if (y_last - 1 < 0)
            y = n - 1;
        else 
            y = y_last - 1;
        
        if (square[x][y] == 0) {
            square[x][y] = count++;
        } else {
            if (y_last + 1 >= n)
                square[x = x_last][y = 0] = count++;
            else
                square[x = x_last][y = y_last + 1] = count++;
        }
    }
}

void print_magic_square(int n, char square[n][n]) {

    int x, y;

    for (y = 0; y < n; y++) {
        for (x = 0; x < n; x++) {
            printf("%4d", square[x][y]);
        }
        printf("\n");
    }
}
