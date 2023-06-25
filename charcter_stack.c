#include<stdio.h>
char stack[100];
int top = -1,size;
void push(char element)
{
  if(top==size-1)
  {
    printf("Stack is full.Insertions are mot possible\n");
  }
  else{
    top++;
    stack[top]= element;
    printf("%c is inserted into stack\n ",element);
  }
}
char pop()
{
  if(top==-1)
  {
    return -1;
  }
  else{
    char rm=stack[top];
    top--;
    return rm;
  }
}
void peek()
{
  if(top==-1)
  {
    printf("stack is empty\n");
  }
  else{
    printf("Element at top is:%s\n",stack[top]);
  }
}
void display()
{
  if(top==-1)
  {
    printf("stack is empty.No element ot display\n");
  }
  else{
    printf("Elements in the stack are:\n");
    for(int i=top;i>=0;i--)
    {
      printf("%s ",stack[i]);
    }
    printf("\n");
  }
}
int main()
{
   printf("Enter size of the stack: ");
   scanf("%d",&size);
   // menu driven program
   int choice;
   while(1){
   printf("Enter 1. Push 2. Pop 3. Peek 4. Display any other to exit: ");
   scanf("%d",&choice);
   if(choice == 1)
   {
    //push( ) operation
    char element[1];
    printf("Enter the element to pushed into the stack: ");
    scanf("%s",element);
    push(element[0]);
   }
   else if(choice == 2)
   {
     // pop() operation
     char removed_element=pop();
     if(removed_element==-1)
     {
      printf("stack is empty.Cannot delete the element\n");
     }
     else {
        printf("Removed element is: %s\n",removed_element);
     }
   }
   else if(choice == 3)
   {
     //peek() operation
     peek();
   }
   else if(choice == 4)
   {
     //display operation
     display();
   }
   else{
    printf("Thank you");
    break;
   }   
   }
}