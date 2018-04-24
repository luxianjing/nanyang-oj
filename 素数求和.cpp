#include<stdio.h>
int main()
{
  int z,i,j,m,n,sum=0,flag=1;
  scanf("%d",&z);
  while(z--)
  {
  	sum=0;
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{   
	    flag=1;
		scanf("%d",&m);
		if(m==1)
		{
			flag=0;
		}
		for(j=2;j<m;j++)
		{
		  if(m%j==0)
		  {
		  	flag=0;
		  	break;	
		  }
		 
		}
		 if(flag==1)
		  {
		  	sum=sum+m;
		  }		
	}  
	 printf("%d\n ",sum);	
  }	
} 
