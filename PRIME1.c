#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long m,n,i,j;
		scanf("%ld",&m);
		scanf("%ld",&n);
		int flag=1;
		if(m==1)
		m++;
		if(m==2)
		{
			printf("%ld\n",m);
			m++;
		}
		i=m;
		while(i<=n)
		{
			for(j=2;j*j<=i;j++)
			{
				if(i%j==0)
				{
					flag=0;
					break;
				}
			}
			if(flag)
			printf("%ld\n",i);
			else
			flag=1;
			if(i%2==0)
			i++;
			else
			i=i+2;
		}
		printf("\n");
	}
	return 0;
}
