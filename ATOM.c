#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,k,m,temp;
		scanf("%lld%lld%lld",&n,&k,&m);
		int count=0;
		if(m<n)
		{
			printf("%d\n",count);
		}
		else
		{
			while(1)
			{
				temp=m/(n*pow(k,count));
				if(temp==0)
				break;
				else
				count++;
				
			}
		printf("%d\n",--count);	
		}
	}
}
