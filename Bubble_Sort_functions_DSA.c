#include<stdio.h>
void bubble_sort(int n,int *a)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{ 
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
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
	bubble_sort(n,a);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
