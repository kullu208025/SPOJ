#include<stdio.h>
int main()
{
	int i,sum=0;
	int a[10];
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	i=0;
	while(i<10)
	{
		sum+=a[i];
		if(sum<100)
		{
			if(i==9)
			printf("%d",sum);
			i++;
			continue;
		}
		else if(sum>=100)
		{
			if(sum==100)
			printf("%d",sum);
			else if(sum-100<=100-(sum-a[i]))
			printf("%d",sum);
			else
			printf("%d",sum-a[i]);
			break;
		}
	}
	return 0;
}
