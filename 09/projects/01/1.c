#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define array_size 5
void quicksort(int array[],int _size);

int main(void) {
printf("Enter integers 5 integers:");
int array[array_size];
memset(array,0,sizeof(array));

for(unsigned char i=0;i<5;scanf("%d",&array[i++]));

quicksort(array,array_size);

for(unsigned char i=0;i<5;i++) printf("%d ",array[i]);

    return 0;

}

// using iteration
void quicksort(int array[],int _size){
    if(!_size) return;
int bottom=0;

while(bottom<_size){
for(unsigned char top=_size-1;bottom<top;){
if(array[top]>=array[bottom]) {
        top--;
continue;}

int temp=array[top];
array[top]=array[bottom];
array[bottom]=temp;
}
bottom++;
}
}
