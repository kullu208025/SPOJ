#include<stdio.h>
int main()
{
	long long int n,t;
	scanf("%lld %lld",&n,&t);
	long long int a[n],i;
	for(i=0;i<n;i++)
	scanf("%lld",&a[i]);
	while(t--)
	{
		long long int k,l,mid,up,flag=0,b[n],j=-1;
		scanf("%lld",&k);
		l=0;
		up=n-1;
		while(l<=up)
		{
			mid=(l+up)/2;
			if(k<a[mid])
			up=mid-1;
			else if(k>a[mid])
			l=mid+1;
			else if(k==a[mid])
			{
				flag=1;
				b[++j]=mid;
				up=mid-1;
				
			}
		}
		if(flag==0)
		printf("-1\n");
		else
		printf("%lld\n",b[j]);
	}
	
}
