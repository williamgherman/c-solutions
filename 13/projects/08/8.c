#include <stdio.h>

#include <ctype.h>


int compute_scrabble_value(const char *word);
int main(void) {



    char c[100];
    memset(c,'\0',sizeof(c));

    int sum;



    printf("Enter a word: ");

char *p=c;

    while ((*p++ = toupper(getchar())) != '\n');
printf("%d",compute_scrabble_value(c));

 return 0;
}
int compute_scrabble_value(const char *word){
    int sum=0;
    char counter=0;

while(word[counter]!=NULL){
    switch (word[counter++]) {

            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O':

            case 'R': case 'S': case 'T': case 'U':

                sum++;

                break;

            case 'D': case 'G':

                sum += 2;

                break;

            case 'B': case 'C': case 'M': case 'P':

                sum += 3;

                break;

            case 'F': case 'H': case 'V': case 'W': case 'Y':

                sum += 4;

                break;

            case 'K':

                sum += 5;

                break;

            case 'J': case 'X':

                sum += 8;

                break;

            case 'Q': case 'Z':

                sum += 10;

                break;

            default:

                break;

        }

    }
return sum;
}

///Solution2
#include <stdio.h>
#include <ctype.h>

int compute_scrabble_value(const char *word){
    int sum = 0;
    while(*word) {
                switch (toupper(*word++)) {
                    case 'A': case 'E': case 'I': case 'L': case 'N': case 'O':
                    case 'R': case 'S': case 'T': case 'U':
                        sum++;
                        break;
                    case 'D': case 'G':
                        sum += 2;
                        break;
                    case 'B': case 'C': case 'M': case 'P':
                        sum += 3;
                        break;
                    case 'F': case 'H': case 'V': case 'W': case 'Y':
                        sum += 4;
                        break;
                    case 'K':
                        sum += 5;
                        break;
                    case 'J': case 'X':
                        sum += 8;
                        break;
                    case 'Q': case 'Z':
                        sum += 10;
                        break;
                    default:
                        break;
                }
            
    }
    return sum;
}
int main(void) {

    char c=0;

    printf("Enter a word: ");
    char my_array[20]={0};
    
    while ((my_array[c++] = getchar()) != '\n');
    

    printf("Scrabble value: %d\n", compute_scrabble_value(my_array));
    return 0;
}
