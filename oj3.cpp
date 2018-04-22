#include<stdio.h>
int main()
{
  int i,m,k;
  scanf("%d",&k);
  while(k--)
  {
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
	  if(i%2!=0)
	   printf("%d ",i);
	}
	printf("\n");
	for(i=1;i<=m;i++)
	{
	   if(i%2==0)
    	printf("%d ",i);
	}
	printf("\n\n");
		
  }
  
}
