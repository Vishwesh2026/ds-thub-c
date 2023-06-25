#include<stdio.h>
#include<string.h>
struct demo{
  char name[100];
  int integer;
  float x;
};
int main()
{
  struct demo ds;
  scanf("%s", ds.name);
  scanf("%d",&ds.integer);
  printf("%s\n", ds.name);
  printf("%d",ds.integer);
}