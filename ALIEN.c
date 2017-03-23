#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long a,b;
		scanf("%ld%ld",&a,&b);
		long p[a],i,j,q[a],r[a];
		for(i=0;i<a;i++)
		scanf("%d",&p[i]);
		for(i=0;i<a;i++)
		{
			q[i]=p[i];
			for(j=i+1;j<a;j++)
			{
				q[i]=q[i]+p[j];
				if(q[i]<=b)
				{
					r[i]=j-i+1;
					break;
				}
				
			}
		}
		long min=q[0];
		j=1;
		for(i=1;i<a;i++)
		if(q[i]<min)
		{
		min=q[i];
		j=i;
		}
		printf("%d %d",min,j);
				
	}
}
