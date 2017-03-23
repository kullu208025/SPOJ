#include<stdio.h>
#include<math.h>
int main()
{
	while(1)
	{
		int a,b,s,m,n;
		scanf("%d%d%d%d%d",&a,&b,&s,&m,&n);
		if(a==0&&b==0&&s==0&&m==0&&n==0)
		break;
		double a1=a,b1=b,t=s;
		double vx,vy,v,angle,temp;
		vx=(m*a1)/t;
		vy=(n*b1)/t;
		temp=pow(vx,2)+pow(vy,2);
		v=sqrt(temp);
		angle=(atan(vy/vx)*360)/(2*3.141592);
		printf("%.2lf %.2lf\n",angle,v);
		
	}
	return 0;
}
