#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int n;
char* pointers[]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve", \
"thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","thirty","fourty","fifty","sixty",\
"seventy","eighty","ninty"
};

while(1){
    printf("Enter a two-digit number: ");

    scanf("%d", &n);
if(n<10 || n>99) {
        printf("out of range\n");
continue;
}

if(n<=20) printf("%s\n",pointers[n-1]);

else printf("%s %s\n",pointers[n/10+18-1],pointers[n%10-1]);

}
    return 0;

}
