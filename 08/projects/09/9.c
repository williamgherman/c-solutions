#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

#define ROWS 10
#define COLS 10
#define UP 0
#define DOWN 1
#define RIGHT 2
#define LEFT 3

int main()
{
 char array[ROWS][COLS];
 memset(array,'.',ROWS*COLS*sizeof(char));

srand((unsigned int)time(NULL));

bool error=false;
unsigned char r=0;
unsigned char c=0;

for(char letter='A';letter<='Z' && !error;){

unsigned char move=rand()%4;

switch(move){
case UP:
    if(r+1<ROWS && array[r+1][c]=='.') array[++r][c]=letter++;
    else if(r-1>=0 && array[r-1][c]=='.') array[--r][c]=letter++;
    else if(c+1<COLS && array[r][c+1]=='.') array[r][++c]=letter++;
    else if(c-1>=0 && array[r][c-1]=='.') array[r][--c]=letter++;
    else error=!error;
break;

case DOWN:
    if(r-1>=0 && array[r-1][c]=='.') array[--r][c]=letter++;
    else if(r+1<ROWS && array[r+1][c]=='.') array[++r][c]=letter++;
    else if(c+1<COLS && array[r][c+1]=='.') array[r][++c]=letter++;
    else if(c-1>=0 && array[r][c-1]=='.') array[r][--c]=letter++;
    else error=!error;
break;

case RIGHT:
    if(c+1<COLS && array[r][c+1]=='.') array[r][++c]=letter++;
    else if(c-1>=0 && array[r][c-1]=='.') array[r][--c]=letter++;
    else if(r+1<ROWS && array[r+1][c]=='.') array[++r][c]=letter++;
    else if(r-1>=0 && array[r-1][c]=='.') array[--r][c]=letter++;
    else error=!error;
break;

case LEFT:
    if(c-1>=0 && array[r][c-1]=='.') array[r][--c]=letter++;
    else if(c+1<COLS && array[r][c+1]=='.') array[r][++c]=letter++;
    else if(r+1<ROWS && array[r+1][c]=='.') array[++r][c]=letter++;
    else if(r-1>=0 && array[r-1][c]=='.') array[--r][c]=letter++;
    else error=!error;

break;

default:
    break;
}
}

for(unsigned char i=0,b=0;i<ROWS;i++,b=0){
    while(b<COLS) putchar(array[i][b++]);
    putchar('\n');
    }
    return 0;
}
