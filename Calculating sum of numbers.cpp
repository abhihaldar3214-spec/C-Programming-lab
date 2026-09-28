//2+5+8+11+14..upto n terms W.c.p to calculate the sum of given series//
#include<stdio.h>
int main()
{
	int term=2,sum=0,i=1,n;
	printf("enter the number of term:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+term;
		term=term+3;
		i++;
	}
	printf("the sum of the series=%d",sum);
	return 0;
	
}
