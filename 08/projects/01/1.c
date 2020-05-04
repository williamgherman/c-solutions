#include <stdio.h>
//#include <stdbool.h>

int main(void) {
	int digit_seen[10]={0};
	int digits,i;
	long n;

	printf("enter a number: ");
	fflush(stdout);
	scanf(" %ld",&n);
	while(n>0){
		digits=n%10;
		digit_seen[digits]++;
		n /= 10;
	}
	for( i=0;i<10;i++){
		if(digit_seen[i]>=2) {
			break;
		}
	}
	if(i<10)printf("Repeated digit(s):");
	else printf("No repeated digit\n");
	for(int j=0;j<10;j++){
		if(digit_seen[j]>=2) printf(" %d",j);
	}



	return 0;
}
