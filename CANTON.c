#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,rem,i;
		scanf("%lld",&n);
		for(i=sqrt(n);i*(i+1)<=2*n;i++)
		continue;
		i--;
		rem=n-(i*(i+1))/2;
		if(rem==0)
		{
			if(i%2==0)
			printf("TERM %lld IS %lld/1\n",n,i);
			else
			printf("TERM %lld IS 1/%lld\n",n,i);
		}
		else
		{
			if(i%2!=0)
			printf("TERM %lld IS %lld/%lld\n",n,rem,(i+2-rem));
			else
			printf("TERM %lld IS %lld/%lld\n",n,(i+2-rem),rem);
		}
	}
	return 0;
}
