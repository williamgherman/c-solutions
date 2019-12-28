#include <stdio.h>
#include <stdlib.h>

#define rows 5
#define cols 5

int main()
{
 int array[rows][cols];

unsigned char student_total_score=0;

unsigned char col_sum=0;

 for(unsigned char i=0;i<rows;i++){
    printf("Grades for Student %d:",i+1);

    unsigned char b=0;

    while(b<5) scanf("%d",&array[i][b++]);

 }
putchar('\n');

 for(unsigned char i=0;i<5;i++){
printf("Total score for Student%d: ",i+1);

    for(unsigned char b=0;b<5;b++){
        student_total_score+=array[i][b];
    }
    printf("%d ",student_total_score);
    printf("Average Score %.2f ",(float)student_total_score/rows);
    putchar('\n');
    student_total_score=0;
 }
printf("\n\n");

 unsigned char low=255;
 unsigned char high=0;

 for(unsigned char i=0;i<5;i++){
        printf("Quiz %d: ",i+1);

    for(unsigned char b=0;b<5;b++){
        col_sum+=array[b][i];
        if(array[b][i]<low) low=array[b][i];
        if(array[b][i]>high) high=array[b][i];
    }
    printf("Average: %.2f Low: %d High: %d\n",(float)col_sum/cols,low,high);

    col_sum=0;
 }
 putchar('\n');

    return 0;
}
