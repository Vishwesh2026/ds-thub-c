#include<stdio.h>
void selection_sort(int n,int *a )
{
       int j,temp,i,min;
       for(i=0;i<n-1;i++)
       {
       	    min=i;
       	    for(j=i+1;j<n;j++)
       	    {
       	       if(a[j]<a[min])
				        min=j;	
			      }
			temp = a[i];
	   a[i] = a[min];
	   a[min]= temp;
	   }
}
int main()
{
	int n,i,j,temp;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selection_sort(n,a);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
// 