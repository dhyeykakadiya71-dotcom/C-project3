#include<stdio.h>
int a,b;

void num(){
	
	printf("Enter the value of A:");
	scanf("%d",&a);
	printf("Enter the value of B:");
	scanf("%d",&b);
}

int sum(){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int mul(int a,int b){
	return a*b;
}
int div(int a,int b){
	return a/b;
}
int mod(int a,int b){
	return a%b;
}
int main(){
	int c;
	while(1){
		num();
		printf("Press 1 for +\nPress 2 for -\nPress 3 for *\nPress 4 for /\nPress 5 for %c\nPress 0 for exit.",37);
		printf("\nYour choice:");
		scanf("%d",&c);
		if(c==0){
			return 0;
		}else{
			switch(c){
				case 1:
					printf("Ans:%d\n\n",sum());
					break;
				case 2:
					printf("Ans:%d\n\n",sub(a,b));
					break;
				case 3:
					printf("Ans:%d\n\n",mul(a,b));
					break;
				case 4:
					printf("Ans:%d\n\n",div(a,b));
					break;
				case 5:
					printf("Ans:%d\n\n",mod(a,b));
					break;
				default:
					printf("Wrong choice!!!\n\n");			
			}
		}
	}
	
}
/*
Enter the value of A:64788
Enter the value of B:3564324
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for exit.
Your choice:1
Ans:3629112

Enter the value of A:5456
Enter the value of B:43678765
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for exit.
Your choice:2
Ans:-43673309

Enter the value of A:54678
Enter the value of B:43987
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for exit.
Your choice:3
Ans:-1889846110

Enter the value of A:09876
Enter the value of B:678
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for exit.
Your choice:4
Ans:14

Enter the value of A:253
Enter the value of B:342
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for exit.
Your choice:4
Ans:0

Enter the value of A:567
Enter the value of B:345
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for exit.
Your choice:5
Ans:222

Enter the value of A:45453
Enter the value of B:345
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for exit.
Your choice:5
Ans:258

Enter the value of A:4545
Enter the value of B:4566
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for exit.
Your choice:0
*/