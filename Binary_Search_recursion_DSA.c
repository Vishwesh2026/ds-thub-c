#include<stdio.h>
int fun(int a[], int se,int low,int high)
{   
   if (low>high)
   return -1;
   else
   {
   	int mid=(high+low)/2;
		if(a[mid]==se)
		return mid;
		else if(a[mid]<se)
		return fun(a,se,mid+1,high);
		else
		return fun(a,se,low,mid-1);
   }
}
int main()
{
	int n,i,b,mid,e,c;
	printf("Enter the array size:");
	scanf("%d",&n);
	printf("Enter the array:");
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the search element:");
	int se;
	scanf("%d",&se);
	int res=fun(a,se,0,n-1);
	if(res==-1)
	printf("Element is Not Found");
	else
	printf("Element is Found");
}
