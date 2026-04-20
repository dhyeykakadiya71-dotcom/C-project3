#include<stdio.h>
int main()
{
	int r,c;
	printf("Enter row of matrix: ");
	scanf("%d",&r);
	printf("Enter column of matrix: ");
	scanf("%d",&c);
	int arr[r][c];
	printf("\nEnter the elements of array:\n\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("arr[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	int max;
	max=arr[0][0];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(arr[i][j]>=max)
			max=arr[i][j];
		}
	}
	printf("\nThe maximum number is : %d",max);
}
/*
	Output:
	Enter row of matrix: 4
	Enter column of matrix: 5
	
	Enter the elements of array:
	
	arr[0][0]: 8797
	arr[0][1]: 564547854
	arr[0][2]: 46875419854
	arr[0][3]: 564265424
	arr[0][4]: 84592184548
	arr[1][0]: 84918456746542984
	arr[1][1]: 9854621748594898545
	arr[1][2]: 8495486498
	arr[1][3]: 458
	arr[1][4]: 54987987545648
	arr[2][0]: 54648894656489
	arr[2][1]: 465549848484984564
	arr[2][2]: 56449549844
	arr[2][3]: 6159854
	arr[2][4]: 169854654621
	arr[3][0]: 6894519846654
	arr[3][1]: 4565645465489598
	arr[3][2]: 564654545456
	arr[3][3]: 564654564654
	arr[3][4]: 645564
	
	The maximum number is : 2013848878
*/