#include<stdio.h>
void merge(long a[],int i1,int j1,int i2,int j2)
{
               int temp[500000];   
               int i,j,k;
               i=i1;    
               j=i2;   
               k=0;
               while(i<=j1&& j <=j2)     
               {
                              if(a[i]<a[j])
                                             temp[k++]=a[i++];
                              else
                                             temp[k++]=a[j++];
                }
               while(i<=j1)   
                              temp[k++]=a[i++];
               while(j<=j2)  
                              temp[k++]=a[j++];
                             for(i=i1,j=0;i<=j2;i++,j++)
                              a[i]=temp[j];
}
void mergesort(long a[],int i,int j)
{
               int mid;
               if(i<j)
               {
                              mid=(i+j)/2;
                              mergesort(a,i,mid);                     
                              mergesort(a,mid+1,j);                   
                              merge(a,i,mid,mid+1,j);                 
               }
}
int main()
{
	int t,n,k,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		scanf("%d",&k);
		long a[n],diff;
		for(i=0;i<n;i++)
		scanf("%ld",&a[i]);
		mergesort(a,0,n-1);
		diff=a[k-1]-a[0];
		for(i=0;(i+k)<=n;i++)
		{
			if(a[k-1+i]-a[i]<diff)
			diff=a[k-1+i]-a[i];
		}
		printf("%ld\n",diff);
	}
	return 0;
}
