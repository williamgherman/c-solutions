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
    do{
        scanf("%d",&array[i][b]);
        b++;
    }while(b<5);
 }

 for(unsigned char i=0;i<5;i++){
        
    for(unsigned char b=0;b<5;b++){
        row_sum+=array[i][b];
        col_sum+=array[b][i];
    }
    printf("Row totals: %d ",row_sum);
    printf("Column totals:: %d ",col_sum);
    row_sum=0;
    col_sum=0;
 }
    return 0;
}
