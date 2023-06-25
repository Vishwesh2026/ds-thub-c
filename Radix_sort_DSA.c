#include<stdio.h>
/*void print_array(int a[],int n)
{
  for(int i=0;i<n;i++)
  {
    printf("%d",&a[i]);
  }
  printf("\n");
}*/
int get_max(int a[],int n)
{
  int max=a[0];
  for(int i=0;i<n;i++)
  {
    if(a[i]>max)
    {
        max=a[i];
    }
  }
  return max;
}
void radix_sort(int a[],int n)
{
  int max=get_max(a,n);
  int pos=1;
  while (max){
    int count[10]={0};
    int buckets[10][n];
    for(int i=0;i<n;i++)
  {
    int place=(a[i]/pos)%10;
    buckets[place][count[place]++]=a[i];
  }
  int k=0;
  for(int i=0;i<10;i++)
  {
    for(int j=0;j<count[i];j++)
    {
      a[k++]=buckets[i][j];
    }
  }
  pos=pos*10;
  max=max/10;
  }
//  print_array(a,n);
}
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  radix_sort(a,n);
  for(int i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
} 