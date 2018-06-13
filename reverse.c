#include <stdio.h>
#include <stdlib.h>

int main()
{
	int R,N;
	printf("Enter the number: ");
	scanf("%d",&N);
	R=0;
	while(N!=0)
	{
	R=R*10+N%10;
	N=N/10;
	}
	printf("\n The reversed digit is: %d",R);
	return 0;
}
