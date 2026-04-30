#include <stdio.h>

int main() 
{
    int n;
    int factorial = 1;
    
	printf("Enter a any value whose factorial you want to know: ");
    scanf("%d", &n);
    
	for (int i = 1; i <= n; i++)
	{
        factorial *= i;
    }

    printf("Factorial of %d = %d\n", n, factorial);
}
/*
	output:
	Enter a any value whose factorial you want to know: 5
	Factorial of 5 = 120
*/