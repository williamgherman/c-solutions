#include <stdbool.h>   /* C99 only */

#include <stdio.h>

#include <string.h>
#define size 80

void encrypt(char *message, int shift);

int main(void)
{

    printf("Enter a sentence: ");

    char array[size];

    for(unsigned char i=0;i<size;i++) array[i]=0;

    char i=0;

    int shift=0;

    while((array[i]=getchar())!='\n') i++;

    printf("Enter shift amount (1-25): ");

    scanf("%d",&shift);

    encrypt(array,shift);

printf("Encrypted message:%s",array);

  return 0;

}

void encrypt(char *message, int shift){

for(char *counter=message;counter<message+strlen(message);counter++){

    if(*counter>='A' && *counter<='Z') *counter=(((*counter - 'A') + shift) % 26 + 'A');

    else if (*counter>='a' && *counter<='z') *counter=(((*counter - 'a') + shift) % 26 + 'a');

}

}

//Solution2
void encrypt(char *message,int shift){
    while(*message++){
        if(*message>='A' && *message<='Z') *message= (((*message - 'A') + shift) % 26 + 'A');
        else if (*message>='a' && *message<='z') *message=(((*message - 'a') + shift) % 26 + 'a');
    }
}

//solution3
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SIZE 80

void encrypt(char *message, int shift);

void encrypt(char *message, int shift){

 while(*message){
 *message=*message>='A' && *message<='Z'?\
 ((*message-'A')+shift)%26+'A':\
 *message>='a' && *message<='z'?\
 ((*message-'a')+shift)%26+'a':*message;
message++;}
}

int main(void) {

 char array[SIZE]={0};

 unsigned char shift_amount;
 
 printf("Enter a mesage: ");

 unsigned char i=0;

 while((array[i++]=getchar())!='\n');

 printf("Enter shift amount 1-25: ");

 scanf(" %hhu",&shift_amount);

  encrypt(array,shift_amount);

  puts(array);
  
  return 0;
}
