#include<stdio.h>
int main()
{
	int a,b;
	while(1)
	{
		scanf("%d%d",&a,&b);
		if(a==-1&&b==-1)
		break;
		else
		{
			int ans=1,big,small;
			big=(a>b)?a:b;
			small=a+b-big;
			if(small==0)
			ans=big;
			else
			{
				big=big-(small+1);
				ans=ans+big/(small+1);
				if(big%(small+1)>0)
				ans++;
			}
			printf("%d\n",ans);
		}
	}
	return 0;
}
