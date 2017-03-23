#include<stdio.h>
void merge(int a[],int i1,int j1,int i2,int j2)
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
void mergesort(int a[],int i,int j)
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
	while(1)
	{
		int n;
		scanf("%d",&n);
		if(n==-1)
		break;
		else
		{
			int a[n],i,avg=0,sum=0;
			for(i=0;i<n;i++)
			scanf("%d",&a[i]);
			mergesort(a,0,n-1);
			for(i=0;i<n;i++)
			avg+=a[i];
			if(avg%n!=0)
			printf("-1\n");
			else
			{
				avg=avg/n;
				for(i=0;a[i]<=avg;i++);
				for(i;i<n;i++)
				sum+=a[i]-avg;
				printf("%d\n",sum);		
			}
		}
	}
	return 0;
}
