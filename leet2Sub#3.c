#include <stdio.h>
#include <string.h>
int main(){
	char str[5][25]={"Tilt","Pasce","good","deed","Here"};
	int i,j,len;
	char rev[25];
	for (i=0;i<5;i++){
		len=strlen(str[i]);
		for(j=0;j<len;j++){
			rev[j]=str[i][(len-1)-j];
		}
		rev[len]='\0';
		if (strcmp(rev,str[i])==0){
			printf("The first palindromic string is %s",rev);
			return 0;
		}
		else {
			rev[0]='\0';
		}
	}
	
}
