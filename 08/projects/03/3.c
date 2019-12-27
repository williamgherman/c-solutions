/* Checks numbers for repeated digits */

#include <stdbool.h>   /* C99 only */
#include <stdio.h>


int main(void)
{
  unsigned char my_array[10];

  unsigned long n;

  long b;

  for(unsigned char i=0;i<10;my_array[i++]=0);

  printf("Enter numbers ... enter 0 to terminate: ");

do{

  scanf("%ld", &b);
  n=b;
  for(;n;my_array[n%10]++,n/=10);

}while(b>0);

  printf("0 1 2 3 4 5 6 7 8 9 10\n");

 for(unsigned char i=0;i<10;printf("%d ",my_array[i++]));

  return 0;
}

