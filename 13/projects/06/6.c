#include <stdio.h>

#include <string.h>
#include <ctype.h>


#define NUM_PLANETS 9



int main(int argc, char *argv[]) {



    char *planets[] = {"Mercury", "Venus", "Earth",

                       "Mars", "Jupiter", "Saturn",

                       "Uranus", "Neptune", "Pluto"};

    int i, j;
char tmp[32];
char pl[32];

    for (i = 1; i < argc; i++) {

        for (j = 0; j < NUM_PLANETS; j++){
memset(tmp,'\0',sizeof(tmp));
memset(pl,'\0',sizeof(pl));
           strcpy(tmp,argv[i]);
strcpy(pl,planets[j]);


           for(char *b=tmp;b<tmp+strlen(tmp);b++)*b=toupper(*b);

for(char *b=pl;b<pl+strlen(pl);b++)*b=toupper(*b);

            if (!strcmp(tmp, pl)) {

                printf("%s is planet %d\n", argv[i], j + 1);

                break;

            }
            }

        if (j == NUM_PLANETS) printf("%s is not a planet\n", argv[i]);

    }

    return 0;

}
