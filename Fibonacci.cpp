#include<stdio.h>
#define N 1000
int main()
{ 
	int a[N],i,m,k;
	scanf("%d",&k);
	while(k--)
	{
	  scanf("%d",&m);
	  a[0]=1,a[1]=1;
	  if(m==1||m==2)
	  	printf("%d\n",a[0]);
	  if(m>2)
	  {
	  for(i=2;i<N;i++)
	  {
	  	a[i]=a[i-1]+a[i-2];
	  }
      printf("%d\n",a[m-1]);
	  }  	
	}	
}

