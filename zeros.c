#include<stdio.h>
#include<stdlib.h>
int main()
{
	 long long int i,n;
	 int count=0;
	scanf("%ld",&n);
	while(n>=5)
	{
	count=count/n;
	n=n/5;
	count++;
}
printf("%d",count);
}

