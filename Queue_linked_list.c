#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *front;
struct node *rear;
void insert();
void delete();
void display();
void main ()
{
int choice;
while(1)
{
printf("\nEnter your choice\n");
printf("\n1.insert an element\n2.Delete an element\n3.Display the
queue\n4.Exit\n");
scanf("%d",& choice);
switch(choice)
{
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
display();
break;
case 4:
exit(0);
break;
default:
printf("\nInvalid choice\n");
}
}
}
void insert()
{
  struct node *nn;
  nn = (struct node *) malloc (sizeof(struct node));
  if(nn== NULL)
    {
      printf("\nMemory not allocated\n");
      return;
    }
  else
  {
    printf("\nEnter value of node\n");
    scanf("%d",&nn->data);
    if(front == NULL)
      {
        front = nn;
        rear = nn;
        front -> next = NULL;
        rear -> next = NULL;
      }
    else
      {
        rear -> next = nn;
        rear = nn;
        rear->next = NULL;
      }
  }
}
void delete ()
{
    struct node *temp;
    if(front == NULL)
      {
        printf("\nUNDERFLOW\n");
        return;
      }
    else
      {
        temp = front;
        front = front -> next;
        free(temp);
      }
}
void display()
{
struct node *temp;
temp= front;
if(front == NULL)
{
  printf("\nEmpty queue\n");
}
else
{
printf("\nprinting values .....\n");
while(temp!= NULL)
{
printf("\n%d\n",temp-> data);
temp = temp -> next;
}
}
}