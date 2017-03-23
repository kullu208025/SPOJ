#include<stdio.h>
int main()
{
	int d;
	scanf("%d",&d);
	while(d--)
	{
		long m,n,a,b;
		scanf("%ld%ld",&n,&m);
		a=n-m;
		b=(m-1)/2;
		if(a&b)
		printf("0\n");
		else
		printf("1\n");
	}
	return 0;
}
