#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the array's size:");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter array's elements:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("\nNegative elements of array are: ");
	for(i=0;i<n;i++)
	{	
		if(a[i]<0)
		printf("%d, ",a[i]);
		
	}
}
/*
	Output:
        
	Enter the array's size:10

    Enter array's elements:
    a[0]: -10
    a[1]: 3948
    a[2]: -2384
    a[3]: -256384
    a[4]: 235687
    a[5]: -23587
    a[6]: 3278
    a[7]: 4567
    a[8]: -34690
    a[9]: -1234

    Negative elements of array are: -10, -2384, -256384, -23587, -34690, -1234,
*/