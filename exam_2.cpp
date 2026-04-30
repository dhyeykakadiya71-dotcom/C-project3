#include <stdio.h>
 
int main() {
    char s[200];
    int a=0, e=0, i=0, o=0, u=0;
 
    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);
 
    for (int j = 0; s[j] != '\0'; j++) 
	{
        if (s[j]=='a' || s[j]=='A') a++;
        if (s[j]=='e' || s[j]=='E') e++;
        if (s[j]=='i' || s[j]=='I') i++;
        if (s[j]=='o' || s[j]=='O') o++;
        if (s[j]=='u' || s[j]=='U') u++;
    }
 
    printf("a=%d, e=%d, i=%d, o=%d, u=%d\n", a, e, i, o, u);
 
}
/*
	OUTPUT:
	Enter a sentence: DHYEY
	a=0, e=1, i=0, o=0, u=0
*/
 