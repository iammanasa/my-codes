#include<stdio.h>
#include<stdlib.h>
int main()
{
	int v,i,j,n;
	int a[n];
	int sum=0,count=1;
	scanf("%d",&n);
	scanf("%d",&v);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		sum=a[i];
		count =1;
	   for(j=i+1;j<n;j++)
	   {
	       sum=sum+a[j];
	   	   count++;
	   	   if(sum>v)
	   	   {
	   	   	    sum=sum-a[j];
	   	        count--;	
	   	    }
	   }
	   	if(sum==v)
	   	{
	   		printf("min of %d numbers\n",count);
		}
}
}
