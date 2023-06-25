#include<stdio.h>
void merge(int *a,int L,int M,int R)
{   int res[R-L+1];
    int i=L,j=M+1,k=0,x;
	while(i<=M && j<=R)
	{
		if(a[i]<=a[j])
		{
			res[k++]=a[i++];
		}
		else
		{
			res[k++]=a[j++];
		}
	}
			while(i<=M)
		{
			res[k++]=a[i++];
		}
		while(j<=R)
		{
			res[k++]=a[j++];
		}
		k=0;
	for(i=L;i<=R;i++)
	{
		a[i]=res[k++];
	}
}
void merge_sort_recursive(int *a,int L,int R)
{
  if(L<R)
  {
    int M=(L+R)/2;
    merge_sort_recursive(a,L,M);
    merge_sort_recursive(a,M+1,R);
    merge(a,L,M,R);
  }
   
}
int main()
{
	int n,i,res;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	merge_sort_recursive(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}