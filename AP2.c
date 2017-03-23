#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int x,y,z,a,d,n,i;
		scanf("%lld%lld%lld",&x,&y,&z);
		n=(2*z)/(x+y);
		d=((y+x)*(y-x))/(2*z-5*(x+y));
		a=x-2*d;
		printf("%lld\n",n);
		for(i=0;i<n;i++)
		printf("%lld ",a+i*d);
		printf("\n");
	}
	return 0;
}
