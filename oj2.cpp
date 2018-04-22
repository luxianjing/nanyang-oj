#include<stdio.h>
int main()
{
  char a[3];
  int i,j,n,m;
  char t;
  scanf("%d",&m);
  for(i=0;i<m;i++)
  {
    scanf("%s",a);
	for(j=0;j<3;j++)
	{
	   for(n=0;n<3-j-1;n++)
	   {
	      if(a[n]>a[n+1])
		  {
		    t=a[n];
			a[n]=a[n+1];
			a[n+1]=t;
		  }
	   }
	}
	printf("%c %c %c",a[0],a[1],a[2]);
	printf("\n");
  }
}