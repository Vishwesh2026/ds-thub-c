#include<stdio.h>
int main()
{
 int t1=0,t2=1,nextterm=0,n;
 scanf("%d",&n);
 while(nextterm<n)
 {
 nextterm=t1+t2;
 t1=t2;
 t2=nextterm;
 }
  printf("%d",nextterm);
} 
