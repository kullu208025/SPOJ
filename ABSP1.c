#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i;
		scanf("%d",&n);
		long long int a[n],sum;
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		sum=0;
		for(i=0;i<n/2;i++)
		{
			sum+=(n-2*i-1)*(a[n-i-1]-a[i]);
		}
		printf("%lld\n",sum);
	}
	return 0;
}

