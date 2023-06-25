#include<stdio.h>
#define min(a,b) a<b ? a : b // this is used to stop the overflow of the elements in the array if the given number of digits in the array is not in the multiples of 2
void merge(int *a,int L,int M,int R)
{   int res[R-L+1];
    int i=L,j=M+1,k=0;
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
void merge_sort(int *a,int n)
{
  int L,M,R;
  for(int p=1;p<n;p*=2)
  {
    for(int i=0;i<n;i+=p*2)
    {
      L=i;
      R=min(L+2*p-1,n-1);
      M=min(L+p-1,n-1);
      merge(a,L,M,R);
    }
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
	merge_sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
