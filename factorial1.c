#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,count=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=5;n/i>=1;i*=5)
	{
		count+=n/i;
	}	
	printf("no of Zeroes are=%d",count);
}
 


