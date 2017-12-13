#include <stdio.h>
int main()
{
	int a[100];
	int f,i,n,j,m,t;
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&f);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(f=0)
	{
		for(i=0;i<m;i++)
		{
			t=a[0];
			for(j=0;j<n-1;j++)
			{
				a[j]=a[j+1];
			}
			a[n-1]=t;
		}
	}
	else if(f==1)
	{
		for(i=0;i<m;i++)
		{
			t=a[n-1];
			for(j=n-1;j>0;j--)
			{
				a[j]=a[j-1];
			}
			a[0]=t;
		}
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
		}
		printf("\n");
		return 0;
	}
}
