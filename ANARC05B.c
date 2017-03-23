#include<stdio.h>/*NOT COMPLETED*/
int main()
{
	while(1)
	{
		int n,m;
		scanf("%d",&n);
		if(n==0)
		break;
		int i,sum,a[n],b[m];
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		scanf("%d",&m);
		for(i=0;i<m;i++)
		scanf("%d",&b[i]);
		int j=0,suma=0;
		i=0;
		int sumb=0;
		while(i<n||j<m)
		{
			if(a[i]==b[j])
			{
				if(suma>sumb)
				sum=sum+suma;
				else
				sum+=sumb;
				suma=0;
				sumb=0;
				i++;
				if(j<m)
				j++;
			}
			if(i<n)
			{
				suma=suma+a[i];
				i++;
			}
			if(j<m)
			{
				sumb=sumb+b[j];
				j++;
			}
		}
		if(suma>sumb)
		sum+=suma;
		else
		sum+=sumb;
		printf("%d\n",sum);
	}
	return 0;
}
