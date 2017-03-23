#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	char a[25];
	gets(a);
	int i,p=0,b=0,c=0,sum,l,flag=0;
	i=0;
	while(a[i]!=' ')
	{
		l=a[i]-48;
		if(l>=0&&l<=9)
		{
		p=p*10+l;
		}
		else
		flag=1;
		i++;
	}
	if(flag)
	p=0;
	flag=0;
	i=i+3;
	while(a[i]!=' ')
	{
		l=a[i]-48;
		if(l>=0&&l<=9)
		{
		b=b*10+l;
		}
		else
		flag=1;
		i++;
	}
	if(flag)
	b=0;
	flag=0;
	i=i+3;
	while(a[i]!='\0')
	{
		l=a[i]-48;
		if(l>=0&&l<=9)
		{
		c=c*10+l;	
		}
		else
		flag=1;
		i++;
	}
	if(flag)
	c=0;
	
	if(p==0&&b!=0&&c!=0)
	{
		p=c-b;
		printf("%d + %d = %d",p,b,c);
	}
	if(b==0&&p!=0&&c!=0)
	{
		b=c-p;
		printf("%d + %d = %d",p,b,c);
	}
	if(c==0&&p!=0&&b!=0)
	{
		c=p+b;
		printf("%d + %d = %d",p,b,c);	
	}
		printf("%d + %d = %d",p,b,c);
	}
	return 0;
		
	
}
