#include<stdio.h>
int main()
{
	int n,k,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&k);
	int j,max=a[0],l=0;
	for(i=0;i<n-k+1;i++)
	{
		if(max==a[i]||l<i)
		{
			max=a[i];
			for(j=i+1;j<k+i;j++)
			if(max<a[j])
			{
			max=a[j];
			l=j;
			}
			printf("%d ",max);
		}
		else if(max<a[i+k-1])
		{
		max=a[i+k-1];
		l=i+k-1;
		printf("%d ",max);
		}
		else 
		printf("%d ",max);
	//	printf("(%d) ",l);
		
	}
	printf("\n");
	return 0;
}
/*1  2  3  1  4  5  2  3  6 \
3 3 4 5 5 5 6*/
