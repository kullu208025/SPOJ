#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		char s[1000];
		scanf("%s",s);
		int k=strlen(s);
		printf("%c\n",s[k-1]);
	}
	return 0;
}
