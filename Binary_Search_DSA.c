#include<stdio.h>
int fun(int a[], int n, int s)
{   int mid,high=n-1,low=0;
	while(high>=low)
	{  
		
		mid=(high+low)/2;
		if(s==a[mid])
		return mid;
		else if(a[mid]<s)
		low=mid+1;
		else
		high=mid-1;
	}
	return -1;
}
int main()
{
	int n,i,mid,low=0,high=n-1;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int s;
	scanf("%d",&s);
	int res=fun(a,n,s);
	if(res==-1)
	printf("Element is Not Found");
	else
	printf("Element is Found");
}
