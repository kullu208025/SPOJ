#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,i,m;
		scanf("%lld",&n);
		i=1;
		while((i*i+i+2)/2<n)
		i++;
		printf("%lld\n",i);
	}
	return 0;
}
