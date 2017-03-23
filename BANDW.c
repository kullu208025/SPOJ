#include<stdio.h>
int main()
{
	while(1)
	{
		char s[600],t[600];
		int i,count;
		scanf("%s%s",s,t);
		if(s[0]=='*'&&t[0]=='*')
		break;
		count=0;
		i=0;
		while(s[i]!='\0')
		{
			if(s[i]!=t[i])
			{
				count++;
				while(s[i]!=t[i]&&i<strlen(s)-1)
				i++;
			}
			i++;
		}
		printf("%d\n",count);
	}
	return 0;
}
