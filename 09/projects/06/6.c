#include <stdbool.h>   /* C99 only */

#include <stdio.h>

#include <ctype.h>

long polynomial(int x);
int main(void)
{
    int x;
    printf("enter value for x: ");
    scanf("%d",&x);
    printf("%ld",polynomial(x));
  return 0;

}

long polynomial(int x){
    
    int tmp1=x;
    int tmp2=x;
    int tmp3=x;

   for(unsigned char i=0;i<4;i++) tmp1*=x;
   for(unsigned char i=0;i<3;i++) tmp2*=x;
   for(unsigned char i=0;i<2;i++) tmp3*=x;

   return 3*tmp1+2*tmp2-5*tmp3-x*x+7*x-6;


}
