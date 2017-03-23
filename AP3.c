#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int x,y,z,a,d,n;
		scanf("%lld%lld%lld",&x,&y,&z);
		double k,s;
		k=7.0*x+5.0*y+2.0*z;
		s=(k+sqrt(k*k-48.0*(x+y)*z))/(2.0*(x+y));
		n=(int)s;
		d=(2*z)/n-(x+y);
		a=x-2*d;
		printf("%lld\n",n);
		long long int i;
		for(i=0;i<n;i++)
		printf("%lld ",a+i*d);
		printf("\n");
	}
	return 0;
}
