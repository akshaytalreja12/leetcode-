#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isVowel(char c){
	int i;
    char v[] = "aeiouAEIOU";
    for ( i = 0; v[i] != '\0'; i++) {
        if (c == v[i]) return 1;
    }
    return 0;
}
void rev(char *s) {
    int l = 0, r= strlen(s) - 1;

    while (l<r) {
        if (!isVowel(s[l])) { 
        l++; 
        continue; 
    }
        if (!isVowel(s[r])) { 
        r--; 
            continue; 
        }
        char temp = s[l];
        s[l] = s[r];
        s[r] = temp;
        l++;
        r--;
    }
}
int main() {
    char s[50];
    scanf("%s", s);
    rev(s);
    printf("%s", s);

    return 0;
}

