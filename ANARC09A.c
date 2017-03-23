#include<stdio.h>
#include<string.h>
int main()
{
	int k=0;
	while(1)
	{
		char s[2000];
		scanf("%s",s);
		if(s[0]=='-')
		break;
		else
		{
			int n,i,ans=0,j=0;
			n=strlen(s);
			char stack[n];
			for(i=0;i<n;i++)
			{
				if(s[i]=='{'&&j<n)
				{
					stack[j]=s[i];
					j++;
				}
				else
				{
					if(j>0)
					j--;
					else
					{
						ans++;
						stack[j]='{';
						j++;
					}
				}
			}
			j=(j)/2;
			ans+=j;
			printf("%d. %d\n",++k,ans);
		}
	}
	return 0;
}
