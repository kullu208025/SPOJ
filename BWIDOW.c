#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i;
		scanf("%d",&n);
		int a[n],b[n];
		for(i=0;i<n;i++)
		scanf("%d%d",&a[i],&b[i]);
		int imax=a[0],l=0;
		for(i=0;i<n;i++)
		if(imax<a[i])
		{
		imax=a[i];
		l=i;
		}
	//	printf("%d\n",imax);
		int flag=0,m;
		for(i=0;i<n;i++)
		if(imax>b[i])
		{
			flag=1;
			break;
		}
		if(flag)
		printf("%d\n",l+1);
		else
		printf("-1\n");
	}
	return 0;
}
