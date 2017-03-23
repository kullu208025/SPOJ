#include<stdio.h>
int main()
{
	int t,i;
	while(scanf("%d",&t))
	{
		if(t==0)
		break;
		char a[1000];
		scanf("%s",a);
		int b[strlen(a)];
		for(i=0;i<strlen(a)-1;i++)
		b[i]=a[i]-48;
		int count=0;
		for(i=0;i<strlen(a);i++)
		{
			int j;
			for(j=0;j<strlen(a);j++)
			{
			if(b[j]==0)
			continue;
			else
			count++;
			}
			for(j=0;j<strlen(a)-1;j++)
			{
				if(b[j]+b[j+1]<26&&b[i!=0])
				count++;
			}
		}
		printf("%d",count);
	}
	return 0;
}
