#include<stdio.h>
int fun(int n,int *a,int s)
{ 
    int i;
   for(i=0;i<n;i++)
   {
     if(a[i]==s)
     return i;
   }
   return -1;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
    int s;
    scanf("%d",&s);
    int result=fun(n,a,s);
	printf("Found in index %d",result);
}
/*1.In Linear search technique of searching; the element is searched sequentially in the list.*/