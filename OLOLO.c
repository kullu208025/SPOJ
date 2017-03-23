#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,a[n],xor=0;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	xor=xor^a[i];
	printf("%d\n",xor);
	return 0;
}
