#include <stdio.h>

int main(void) {
	int noTotalLetters=1, noWords=1;
	char c;
	printf("Enter a sentence: ");
	fflush(stdout);
	while((c=getchar())==' ');
	while(c!='\n'){
		c=getchar();
		
		if(c!=' ' && c!='\n') noTotalLetters++;
		
		else if(c==' '){
			while((c=getchar())==' ' && c!='\n');
			if( c!='\n'){
			noWords++;
			noTotalLetters++;
		}
		}
	}
	printf("Average word length: %.1f",(float)(noTotalLetters)/noWords);

	return 0;
}
