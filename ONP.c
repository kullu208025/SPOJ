#include<stdio.h>
#include<string.h>
int pri(char a)
{
	switch(a)
	{
		case '+':return 2;
		case '-':return 1;
		case '*':return 3;
		case '/':return 4;
		case '^':return 5;
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[400],stack[400],ans[400],ch;
		int i,j,st=-1,a=-1;
		scanf("%s",&s);
		for(i=0;i<strlen(s);i++)
		{
			if(s[i]=='('||s[i]==')'||s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^')
			{
				if(s[i]==')')
				{
					while(stack[st]!='(')
					{
						ans[++a]=stack[st];
						st--;
					}
					st--;
				}
				else
				{
					ch=s[i];
					if(pri(ch)<pri(stack[st])&&st!=-1&&ch!='('&&stack[st]!='(')
					{
						ans[++a]=stack[st];
						stack[st]=s[i];
					}
					else
					stack[++st]=s[i];
				}
			}
				else
				ans[++a]=s[i];
				/*printf("%d %d\n",st,a);
				if(j==-1)
				printf("EMPTY\n");
				else
				for(j=0;j<=st;j++)
				printf("%c",stack[j]);
				printf("\n");
				for(j=0;j<=a;j++)
				printf("%c",ans[a]);
				printf("\n");*/
		}
		for(st;st>=0;st--)
		if(stack[st]!='('&&stack[st]!=')')
		ans[++a]=stack[st];
		ans[++a]='\0';
		printf("%s\n",ans);
	}
	return 0;
}
