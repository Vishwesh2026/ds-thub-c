#include<stdio.h>
/*void swap(int *a,int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}*/
int lomuto_partition(int a[],int l,int r)
{
  int pivot;
    pivot=a[r];
    int i=l-1;
      for(int j=l;j<r;j++)
      {
        if(a[j]<=pivot)
        {
          i++;
          //swap(&a[i],&a[j])
         int temp=a[i];
         a[i]=a[j];
         a[j]=temp;
        } 
      }
      //swap(&a[i+1],&a[r]);
      int temp=a[i+1];
         a[i+1]=a[r];
         a[r]=temp;
      return i+1;
  }
void quick_sort(int a[],int l,int r)
  {
      if(r>l)
        {
          int p=lomuto_partition(a,l,r);
          quick_sort(a,l,p-1);
          quick_sort(a,p+1,r);
        }
  }
int main()
{
  int n,i,j,l,r;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  quick_sort(a,0,n-1);
for(i=0;i<n;i++){
  printf("%d ",a[i]);
}
}