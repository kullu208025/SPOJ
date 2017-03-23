#include<stdio.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	long long int a[80];
	a[0]=0;
	a[1]=1;
	for(i=2;i<80;i++)
	a[i]=a[i-1]+a[i-2];
	while(t--)
	{
		 long long int n,sum=0;
		 scanf("%lld",&n);
		 while(n>0)
		 {
		 	int b=1;
		 	while(a[b]<=n)
		 	b++;
		 	sum=sum+a[b];
		 	n=n-a[b-1];
		// 	printf("%lld\n",n);
		 }
		 printf("%lld\n",sum);
	}
	return 0;
}
