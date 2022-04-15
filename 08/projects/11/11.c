#include <stdio.h>

#define array_size 15

int main(void) {
    char c;
    printf("Enter phone number: ");

    char counter=0;
    char array[array_size];

    for(unsigned char i=0;i<array_size;array[i++]=0);

    while (((c = toupper(getchar())) != '\n') && (counter<array_size)) {

        switch (c) {

            case 'A': case 'B': case 'C':

                array[counter++]='2';

                break;

            case 'D': case 'E': case 'F':

                array[counter++]='3';

                break;

            case 'G': case 'H': case 'I':

                array[counter++]='4';

                break;

            case 'J': case 'K': case 'L':

                array[counter++]='5';

                break;

            case 'M': case 'N': case 'O':

                array[counter++]='6';

                break;

            case 'P': case 'R': case 'S':

                array[counter++]='7';

                break;

            case 'T': case 'U': case 'V':

                array[counter++]='8';

                break;

            case 'W': case 'X': case 'Y':

                array[counter++]='9';

                break;

            default:

                array[counter++]=c;

                break;

        }

    }
printf("In numeric form: ");
    for(unsigned char i=0;i<array_size;i++) printf("%c",array[i]);
    printf("\n");

    return 0;

}
//another solution
#include <stdio.h>
#include <ctype.h>

#define SIZE 15
#define SIZE_OF(x) (unsigned char)(sizeof(x)/sizeof(x[0]))
int main(void) {

char p_number[SIZE]={0};

unsigned char i=0;
printf("enter phone number: ");
while((p_number[i]=toupper(getchar()))!='\n'&& i<SIZE_OF(p_number)){
switch(p_number[i]){
case 'A':case 'B': case 'C': p_number[i++]='2';break;
case 'D':case 'E': case 'F': p_number[i++]='3';break;
case 'G':case 'H': case 'I': p_number[i++]='4';break;
case 'J':case 'K': case 'L': p_number[i++]='5';break;
case 'M':case 'N': case 'O': p_number[i++]='6';break;
case 'P':case 'Q': case 'R': p_number[i++]='7';break;
case 'T':case 'U': case 'V': p_number[i++]='8';break;
case 'W':case 'X': case 'Y': p_number[i++]='9';break;
default: i++;break;
}
}

puts(p_number);
    return 0;
}

