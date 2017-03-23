#include<stdio.h>
int main()
{
	double ans,sum;
	while(1)
	{
		scanf("%lf",&ans);
		sum=0.00;
		int i,count=0;
		if(ans==0.00)
		break;
		else
		for(i=2;;i++)
		{
			sum=sum+1.00/i;
			count++;
			if(sum>=ans)
			break;
		}
		printf("%d card(s)\n",count);
	}
}
