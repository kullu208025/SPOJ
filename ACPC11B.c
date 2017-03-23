#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int m,n,i,j;
		scanf("%d",&m);
		int a[m];
		for(i=0;i<m;i++)
		scanf("%d",&a[i]);
		scanf("%d",&n);
		int b[n];
		for(j=0;j<n;j++)
		scanf("%d",&b[j]);
		int min=a[0]>b[0]?a[0]-b[0]:b[0]-a[0];
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i]>=b[j])
				{
					if(min>a[i]-b[j])
					min=a[i]-b[j];
				}
				else 
				{
					if(min>b[j]-a[i])
					min=b[j]-a[i];
				}
			}
		}
		printf("%d\n",min);
	}
	return 0;
}
