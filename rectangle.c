#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,k,sum=0;
	k=sqrt(n);
	for(i=1;i<=k;i++)
	{
		sum=sum+(n/i)-(i-1);
		
	}
	printf("%d",sum);
	return 0;
}
