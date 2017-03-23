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
	int t;
	scanf("%d",&t);
	printf("\n");
	while(t--)
	{
		int g,m,j;
		scanf("%d%d",&g,&m);
		int a[g],b[m],i;
		for(i=0;i<g;i++)
		scanf("%d",&a[i]);
		for(i=0;i<m;i++)
		scanf("%d",&b[i]);
		mergesort(a,0,g-1);
		mergesort(b,0,m-1);
		i=0;j=0;
		while(1)
		{
			if(a[g-1]>b[m-1])
			m--;
			else if(a[g-1]<b[m-1])
			g--;
			else if(a[g-1]==b[m-1])
			m--;
			if(m==0||g==0)
			break;
		}
		if(m==0)
		printf("Godzilla\n");
		else if(g==0)
		printf("MechaGodzilla\n");
		else
		printf("uncertain\n");
		//printf("\n");
	}
	return 0;
}
