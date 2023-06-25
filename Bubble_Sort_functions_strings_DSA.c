#include<stdio.h>
void bubble_sort_string(char *a,int n )
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
		scanf("%s",a);
	bubble_sort_string(a,n);
	
		printf("%s",a);
	
}
