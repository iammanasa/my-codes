#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int n,flag=0;
	scanf("%d",&n);
	int a[n],i,j;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int l=0,r=0;
	for(i=1;i<n;i++)
	{
	for(j=0;j<i;j++)
	l=l+a[j];
    for(j=i+1;j<n;j++)
	r=r+a[j];
	if(l==r)
{
	flag=1;
	printf("%d %d\n",i+1,l);
	break;
}
l=r=0;
}
}
}
