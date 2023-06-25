#include<stdio.h>
#define min(a,b) a<b ? a : b
int fib_search(int arr[],int n,int s)
{
	int a,b,c,offset=-1,i;
	a=0;
	b=1;
	c=a+b;
	while(c<n){
		a=b;
		b=c;
		c=a+b;
	}
	while(c>1)
	{
		i=min(offset+a,n-1);
		if(s==arr[i])
		{
			return i;
		}
		else if(s>arr[i])
		{
			//bring all 3 fib number to 1 fib down
			c=b;
			b=a;
			a=c-b;
			offset=i;
		}
		else
		{
			//bring all 3 fib number to 2 fib down
			c=a;
			b=b-a;
			a=c-b;
		}
	}
	if(b && arr[offset+1]==s)
	{
	return offset+1;
	}
	return -1;
}
int main()
{ 
   int n,i,result,s;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
   {
   	scanf("%d",&arr[i]);
   }
   scanf("%d",&s);
   result=fib_search(arr,n,s);
   if(result==-1)
   {
   	printf("Element is not found");
   }
   else
   {
   	printf("Element is found at %d index",result);
   }
} 

