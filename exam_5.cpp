#include<stdio.h>
int main()
{
	int x,y,z;
	for(x=5;x>=1;x--)
	{
		for(z=1;z<x;z++)
		printf("  ");
		for(y=x;y<=5;y++)
		{
			printf("%d ",y);
		}
		printf("\n");
	}
}
/*
Output:
        5
      4 5
    3 4 5
  2 3 4 5
1 2 3 4 5

*/