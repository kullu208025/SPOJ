#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		if(y==x)
		{
			if(x%2==0)
			printf("%d\n",x+x);
			else
			{
				y--;
				printf("%d\n",y+y+1);
			}
		}
		else if(x==y+2)
		{
			if(y%2==0)
			printf("%d\n",y+x);
			else
			{
				y--;
				x=y+2;
				printf("%d\n",x+y+1);
			}
		}
		else
		printf("No Number\n");
	}
	return 0;
}
