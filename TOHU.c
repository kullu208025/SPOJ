#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		double sum;
		sum=(3.0/4.0)+(1.0/(2.0*(n+2)))-(1.0/(2.0*(n+1)));
		printf("%.11lf\n",sum);
	}
	return 0;
}
