#include<stdio.h>
#include<stdlib.h>//malloc
int main()
{
  int n=5;
  /*int arr[]={10, 20 ,30, 40,50};
  //array name itself acts as a pointer
  //points to first element in the array
  for(int i=0;i<n;i++)
  {
    printf("%d",*(arr+i));
  }*/
  int *arr=(int *)malloc(n*sizeof(int));
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++)
  {
    printf("%d",*(arr+i));
  }

}