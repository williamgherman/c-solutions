#include <stdio.h>
#include <stdlib.h> /* srand(), rand() */
#include <time.h> /* time() */

int main(void) {

    void generate_random_walk(char grid[10][10]);
    void print_array(char grid[10][10]);

    char grid[10][10] = {0};

    srand((unsigned) time(NULL));

    generate_random_walk(grid);
    print_array(grid);
    return 0;
}

void generate_random_walk(char grid[10][10]) {

    char letter = 'A';

    int i = 0,
        j = 0,
        up = 0,   /* directions are essentially bools, written as ints to */
        down = 0, /* conform with C89 standard.                           */
        left = 0,
        right = 0,
        move = 0;

    srand((unsigned) time(NULL));

   
    grid[i][j] = letter++;

    while (letter <= 'Z') {
        up = down = left = right = move = 0;

        if (j + 1 < 10 && grid[i][j + 1] == 0)
            up = 1;
        if (j - 1 >= 0 && grid[i][j - 1] == 0)
            down = 1;
        if (i + 1 < 10 && grid[i + 1][j] == 0)
            right = 1;
        if (i - 1 >= 0 && grid[i - 1][j] == 0)
            left = 1;

        if (up + down + left + right == 0)
            break;

        move = rand() % 4;
        

        /* Intentional fallthrough if direction fails */
        switch(move) {
            case 0:
                if (up) {
                    grid[i][++j] = letter++;
                    break;
                }
            case 1:
                if (down) {
                    grid[i][--j] = letter++;
                    break;
                }
            case 2:
                if (right) {
                    grid[++i][j] = letter++;
                    break;
                }
            case 3:
                if (left) {
                    grid[--i][j] = letter++;
                    break;
                }
            default:
                break;
        }
    }
    return;
}
void print_array(char grid[10][10]) {
    int i, j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (grid[i][j] == 0) 
                grid[i][j] = '.';
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }
} 
