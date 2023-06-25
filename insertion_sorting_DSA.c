#include<stdio.h>
int main()
{
	int n,i,j,key;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=i-1;j<n-1;j++)
		{
			key=a[i];
			if(a[j]<key)
			{
				a[j+1]=key;
				break;
			}//for last element 
			else
			{
				a[j+1]=a[j];
				j--;
			}// for middle element
			if(j==-1)
			{
				a[j+1]=key;
				break;
			}//for first element
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}