#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int e,n,lar,sml,count=0;
		scanf("%d%d",&e,&n);
		lar=e>n?e:n;
		sml=e+n-lar;
		while(lar>0&&sml>0)
		{
			if(lar==1&&sml==1)
			break;
		while(lar>=sml&&sml>0)
		{
			if(lar==1&&sml==1)
			break;
			count++;
			lar=lar-2;
			sml--;
		}
		while(sml>=lar&&lar>0)
		{
			if(lar==1&&sml==1)
			break;
			count++;
			sml=sml-2;
			lar--;
		}
		}
		printf("%d\n",count);
	}
	return 0;
}
