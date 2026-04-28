#include <stdio.h>
int main()
{
    char str[100];
    char *ptr;
    int length=0;
    printf("\nEnter any string: ");
    gets(str); 
    ptr = str;
    while(*ptr!='\0')
    {
    	length++;
    	ptr++;
	}
    printf("\nLength of a string is : %d\n",length);
}
/*
	Output:
	Enter any string: dhyey kakadiya
	
	Length of a string is : 14
*/