#include <stdio.h>
 
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
int main() {
    int x, y;
 
    printf("Enter two numbers X & Y: ");
    scanf("%d %d", &x, &y);
 
    printf("Before: x=%d, y=%d\n", x, y);
    swap(&x, &y);
    printf("After:  x=%d, y=%d\n", x, y);
 
}
/*
	output:
	Enter two numbers X & Y: 12
	45
	Before: x=12, y=45
	After:  x=45, y=12
*/