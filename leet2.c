#include <stdio.h>
void reverseString(char* s, int sSize) {
    int i,j;
	char rev[sSize+1];
	for (i=0,j=sSize-1;i<sSize+1;i++){
		
		rev[i]=s[j];
		--j;
	}
	for(i=0;i<sSize;i++){
		printf("%c ",s[i]);
	}
	printf("\nto this\n");
	for(i=0;i<sSize;i++){
		printf("%c ",rev[i]);
	}
}
int main(){
char s[]={'s','u','m','k','a'};
reverseString(s,6);
}
