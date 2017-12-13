#include <stdio.h>
int main()
{
	int a[100];
	int i,j,m,t;
	scanf("%d",&m);
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	int n=10;
	for(i=n-1;i>m-1;i--)
	{
		t=a[n-1];
		for(j=n-1;j>0;j--)
		{
			a[j]=a[j-1];
		}
		a[0]=t;
	}
	for(i=0;i<m;i++)
	{
		t=a[0];
		for(j=0;j<n-1;j++)
		{
			a[j]=a[j+1];
			}
			a[9]=t;
				}
				printf("输出移动后的结果:");
				for(i=0;i<10;i++)
				{
					printf("%d",a[i]);
				}
					printf("\n");
					return 0;
}
