#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define rows 10
#define cols 10

int main()
{
 char array[rows][cols];
 for(unsigned char i=0;i<rows;i++)
        for(unsigned char b=0;b<cols;b++)
        array[i][b]='.';


srand((unsigned int)time(NULL));

bool error=false;

for(char letter='A',r=0,c=0;letter<='Z' && !error;letter++){

unsigned char move=rand()%4;

switch(move){
case 0:
if((r+1<rows) && (array[r+1][c]=='.')) {
        array[r+1][c]=letter;
r++;
}
else if((r-1>=0) && (array[r-1][c]=='.')) {
        array[r-1][c]=letter;
r--;
}

else if((c+1<cols) && (array[r][c+1]=='.')) {
        array[r][c+1]=letter;
c++;
}
else if((c-1>=0) && (array[r][c-1]=='.')) {
        array[r][c-1]=letter;
c--;
}
else error=true;

break;

case 1:
    if((r-1>=0) && (array[r-1][c]=='.')) {
        array[r-1][c]=letter;
r--;
}
else if((r+1<rows) && (array[r+1][c]=='.')) {
        array[r+1][c]=letter;
r++;
}

else if((c+1<cols) && (array[r][c+1]=='.')) {
        array[r][c+1]=letter;
c++;
}

else if((c-1>=0) && (array[r][c-1]=='.')) {
        array[r][c-1]=letter;
c--;
}
else error=true;
break;

case 2:
    if((c+1<cols) && (array[r][c+1]=='.')) {
        array[r][c+1]=letter;
c++;
}
else if((c-1>=0) && (array[r][c-1]=='.')) {
        array[r][c-1]=letter;
c--;
}

else if((r+1<rows) && (array[r+1][c]=='.')) {
        array[r+1][c]=letter;
r++;
}

else if((r-1>=0) && (array[r-1][c]=='.')) {
        array[r-1][c]=letter;
r--;
}
else error=true;
break;

case 3:
if((c-1>=0) && (array[r][c-1]=='.')) {
        array[r][c-1]=letter;
c--;
}
else if((c+1<cols) && (array[r][c+1]=='.')) {
        array[r][c+1]=letter;
c++;
}
else if((r+1<rows) && (array[r+1][c]=='.')) {
        array[r+1][c]=letter;
r++;
}

else if((r-1>=0) && (array[r-1][c]=='.')) {
        array[r-1][c]=letter;
r--;
}
else error=true;

break;

default:
    break;
}
}

for(unsigned char i=0;i<rows;i++){
    for(unsigned char b=0;b<cols;b++){
        printf("%c",array[i][b]);
    }
    putchar('\n');
}
    return 0;
}

    
