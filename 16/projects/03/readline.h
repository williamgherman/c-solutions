#ifndef READLINE_H
#define READLINE_H

/* read_line: Skips leading whitespace characters, then reads the remainder of
 *            the input line and stores it in str. Truncates the line if its
 *            length exceeds n. Returns the number of characters stores.
 */
int read_line(char str[], int n);

#endif
