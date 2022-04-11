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

//how about this?
#include <stdio.h>

#define ROWS 5
#define COLS 5

int main(void)
{
int array[ROWS][COLS]={0};
int row_sum[ROWS]={0};
int col_sum[COLS]={0};

for(int i=0;i<ROWS;i++){
printf("Enter row %d:",i+1);
        for(int b=0;b<ROWS;scanf(" %d",&array[i][b++]));
}

printf("Row totals: ");
for(int i=0;i<ROWS;){
        for(int b=0;b<ROWS;){
        row_sum[i]+=array[i][b];
        col_sum[i]+=array[b++][i];
        }
printf("%d ",row_sum[i++]);
}

printf("\ncol totals: ");

for(int i=0;i<ROWS;printf("%d ",col_sum[i++]));

putchar('\n');

   return 0;
}
