#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		long long int ans;
		ans=((long long int)n*(n+2)*(2*n+1))/8;
		printf("%lld\n",ans);
	}
	return 0;
}
