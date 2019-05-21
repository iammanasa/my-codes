#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum=0,sum1=0,dif=0,i,j; 
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
          
          scanf("%d",&a[i][j]);
       }
    }
    for(i = 0;i<n;i++)
    {
       
              sum=sum+a[i][i];
      }
    for( i = 0; i < n; i++)
    {
         sum1+=a[i][n-(i+1)];
    }
    if(sum>sum1)
    {
            dif=sum-sum1;
    }
    else{
            dif=sum1-sum;
    }
    printf("%d",dif);
        
    return 0;
    
}
    



