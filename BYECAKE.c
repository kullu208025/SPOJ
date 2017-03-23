#include<stdio.h>
int main()
{
	int a[4],b[4],rem[4],div[4],i,ans[i];
	while(1)
	{
		for(i=0;i<4;i++)
		scanf("%d",&a[i]);
		for(i=0;i<4;i++)
		scanf("%d",&b[i]);
		if(a[i]==-1)
		break;
		else
		{
			for(i=0;i<4;i++)
			{
				div[i]=a[i]/b[i];
				rem[i]=a[i]%b[i];
			}
			int max=div[0],max1=rem[0],j=0;
			for(i=1;i<4;i++)
			if(div[i]>=max)
			{
				if(max==div[i])
				{
					if(rem[i]>max1)
					{
						max=div[i];
						j=i;
						max1=rem[i];
					}
				}
				else
				{
					max=div[i];
					j=i;
					max1=rem[i];
				}
			}
				if(rem[j]==0)
				{
					for(i=0;i<4;i++)
					ans[i]=max*b[i]-a[i];
				}
				else
				{
					max++;
					for(i=0;i<4;i++)
					ans[i]=max*b[i]-a[i];
				}
				for(i=0;i<4;i++)
				printf("%d ",ans[i]);
				printf("\n");
		}
	}
	return 0;
}
