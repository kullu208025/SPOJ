#include<stdio.h>
#include<math.h>
int main()
{
	while(1)
	{
	long long int g,t,a,d,x,y;
	scanf("%lld%lld%lld%lld",&g,&t,&a,&d);
	if(g==-1&&t==-1&&a==-1&&d==-1)
	break;
	x=g*((t*(t-1))/2);
	long long int fteam=g*a,count=0,flag=0;
	//printf("%d\n",fteam);
	fteam+=d;
	long long int k=fteam;
	y=k;
	while(k>1)
	{
		count++;
		if(k%2)
		flag=1;
	//	printf("%d\n",flag);
		k=k/2;
	}
	//printf("%d %d\n",flag,count);
	if(flag)
	count++;
	fteam=pow(2,count);
	//printf("%d %d\n",y,fteam);
	y=fteam-y;
	while(fteam>0)
	{
		fteam/=2;
		x=x+fteam;
	}
	printf("%lld*%lld/%lld+%lld=%lld+%lld\n",g,a,t,d,x,y);
	}
	return 0;
}
