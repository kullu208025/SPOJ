#include<stdio.h>
#include<stdlib.h>
int main()
{
	while(1)
	{
		long long int w,h;
		scanf("%lld%lld",&w,&h);		
		if(w==0&&h==0)
		break;
		long long int s,l,ans;
		s=w<h?w:h;
		l=w+h-s;
		//printf("%lld %lld\n",l,s);
		if(l%s==0)
		printf("%lld\n",l/s);
		else
		printf("%lld\n",l*s);
	}
	return 0;
}
