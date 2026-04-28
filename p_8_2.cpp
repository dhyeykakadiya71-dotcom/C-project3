#include<stdio.h>
void Array()
{
	int n;
	printf("\nEnter array's size : ");
	scanf("%d",&n);
	int arr[n][n];
	printf("\nEnter array elements : \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	int *ptr[n][n];
	printf("\nCube of all elements : \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			ptr[i][j]=&arr[i][j];
			*ptr[i][j]=arr[i][j]*arr[i][j];
			printf("%d ",*ptr[i][j]);
		}
		printf("\n");
	}
	
}
int main()
{
	Array();
}
/*
	Output:
	Enter array's size : 3
	
	Enter array elements :
	arr[0][0] = 9
	arr[0][1] = 8
	arr[0][2] = 7
	arr[1][0] = 6
	arr[1][1] = 5
	arr[1][2] = 4
	arr[2][0] = 3
	arr[2][1] = 2
	arr[2][2] = 1
	
	Cube of all elements :
	81 64 49
	36 25 16
	9 4 1
*/