### Project 22.18

Write a program that reads integers from a text file whose name is given as a
command line argument. Each line of the file may contain any number of integers
(including none) separated by one or more spaces. Have the program display the
largest number in the file, the smallest number and the median (the number
closest to the middle if the integers were sorted). If the file contains an even
number of integers, there will be two numbers in the middle; the program should
display their average (rounded down). You may assume that the file contains no
more than 10,000 integers. *Hint:* Store the integers in an array and then sort
the array.

### Solution

See `18.c`.

NB: The file `input.txt` is a five column list of seven thousand random numbers
between 0 and 100,000,000, generated from <http://www.random.org/integers/>.
