#include <stdio.h>
#include <stdlib.h>
void push();
void pop();
void display();
struct node
{
int data;
struct node *next;
};
struct node *top;
void main ()
{
int choice;
while(1)
{
printf("\nEnter your choice \n1.Push\n2.Pop\n3.Display\n4.Exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
exit(0);
break;
default:
printf("Invalid choice\n");
break;
}
}
}
void push ()
{
struct node *newnode;
newnode = (struct node*)malloc(sizeof(struct node));
if(newnode == NULL)
{
printf("node not created\n");
}
else
{
printf("Enter the value of node\n");
scanf("%d",&newnode->data);
if(top==NULL)
{
newnode-> next = NULL;
top=newnode;
}
else
{
  newnode->next = top;
top=newnode;
}
}
}
void pop()
{
int value;
struct node *temp;
if (top == NULL)
{
printf("Underflow");
}
else
{
value = top->data;
temp = top;
top = top->next;
free(temp);
}
}
void display()
{
int i;
struct node *temp;
temp=top;
if(temp == NULL)
{
printf("Stack is empty\n");
}
else
{
printf("Printing Stack elements \n");
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp = temp->next;
}
}
}