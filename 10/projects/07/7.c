#include <stdio.h>
#include <ctype.h> /* isdigit */

#define MAX_DIGITS 10

/* prototypes */
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

/* external variables */
/* 7-segment representations for digits 0-9:
 *
 *    _0_
 * 5 |   | 1
 *   |_6_|
 * 4 |   | 2
 *   |_3_|
 */
const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},
                             {0, 1, 1, 0, 0, 0, 0},
                             {1, 1, 0, 1, 1, 0, 1},
                             {1, 1, 1, 1, 0, 0, 1},
                             {0, 1, 1, 0, 0, 1, 1},
                             {1, 0, 1, 1, 0, 1, 1},
                             {1, 0, 1, 1, 1, 1, 1},
                             {1, 1, 1, 0, 0, 0, 0},
                             {1, 1, 1, 1, 1, 1, 1},
                             {1, 1, 1, 1, 0, 1, 1}};
char digits[4][MAX_DIGITS * 4];
/* translating the 7-segment display to a 3x3 grid:
 *
 *  012
 * 0 _
 * 1|_|
 * 2|_|
 */
const int segment_grid[7][2] = {{0, 1},
                                {1, 2},
                                {2, 2},
                                {2, 1},
                                {2, 0},
                                {1, 0},
                                {1, 1}};

/*
 * main: runs clears_digits_array, process_digit and prints_digits_array only
 *       once.
 */
int main(void) {

    char c;
    int position = 0;

    clear_digits_array();

    printf("Enter a number: ");
    while ((c = getchar()) != '\n') {
        if (isdigit(c)) {
            process_digit(c - '0', position);
            position += 4;
        }
    }
    print_digits_array();

    return 0;
}

/*
 * clear_digits_array: clears the digits array with spaces.
 */
void clear_digits_array(void) {

    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < MAX_DIGITS * 4; j++) {
            digits[i][j] = ' ';
        }
    }
}

/*
 * process_digit: enters a 7-segment display representation of the digit into
 *                the digits array at position.
 */
void process_digit(int digit, int position) {

   int i, row, col;
   
   for (i = 0; i < 7; i++) {
       if (segments[digit][i]) {
           row = segment_grid[i][0];
           col = segment_grid[i][1] + position;
           digits[row][col] = i % 3 == 0 ? '_' : '|';
       }
   }
}

/*
 * print_digits_array: prints the 7-segments representation of the digits
 */
void print_digits_array(void) {

    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < MAX_DIGITS * 4; j++)
            putchar(digits[i][j]);
        printf("\n");
    }
}
