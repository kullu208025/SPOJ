#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	char s[2*n],a[2*n];
	int b[2*n];
	scanf("%s",s);
	for(i=0;i<2*n;i++)
	{
			b[i]=s[i];
			if(s[i]=='D')
			b[i]=65;
			else
			b[i]++;
	}
	for(i=0;i<2*n;i++)
	printf("%c",b[i]);
	printf("\n");
	return 0;	
}
