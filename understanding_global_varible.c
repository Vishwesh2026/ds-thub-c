#include<stdio.h>
/*int a=10;//global scope variable
void fun()
{
  printf("From function fun %d",a);
}
int main()
{
  fun();
  printf("\nFrom main() function %d",a);
  return 0;
}*/
int a[5];//global scope variable
void fun()
{
  for(int i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
}
int main()
{
  fun();
 for(int i=0;i<5;i++)
  {
    printf("%d ",a[i]);
  }
  return 0;
}