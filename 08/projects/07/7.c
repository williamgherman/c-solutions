#include <stdio.h>
#include <stdlib.h>

#define rows 5
#define cols 5

int main()
{
 int array[rows][cols];

unsigned char row_sum=0;

unsigned char col_sum=0;


 for(unsigned char i=0;i<rows;i++){
    printf("enter row %d:",i+1);

    unsigned char b=0;

    while(b<5) scanf("%d",&array[i][b++]);

 }

 printf("Row totals: ");
 for(unsigned char i=0;i<5;i++){

    for(unsigned char b=0;b<5;b++){
        row_sum+=array[i][b];
    }
    printf("%2d ",row_sum);
    row_sum=0;
 }
 putchar('\n');

 printf("Col totals: ");
 for(unsigned char i=0;i<5;i++){

    for(unsigned char b=0;b<5;b++){
        col_sum+=array[b][i];
    }
    printf("%2d ",col_sum);
    col_sum=0;
 }
 putchar('\n');
    return 0;
}
