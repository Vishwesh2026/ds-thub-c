#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node*next;
};
typedef struct node NODE;
NODE*head=NULL;
void insert_at_head(NODE*nn){
    if(head==NULL){
      head=nn;
    }
    else{
      nn-> next=head;
      head=nn;
    }
}
void display(){
  if(head==NULL){
    printf("No nodes\n");
    return;
  }
  NODE *temp=head;
  while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
  }
  printf("\n");
}
void insert_at_end(NODE*nn){
  if(head==NULL)
  {
    head=nn;
  }
  else{
    NODE *temp=head;
  while(temp->next!=NULL)
  {
    temp=temp->next;
  }
  temp->next=nn;//inserting new node at tail
  }
}
void delete_at_head()
    {
      if(head==NULL)
      {
        printf("No Nodes\n");
        return;
      }
      else{
        printf("Deleted element is %d: \n",head->data);
        NODE *dn=head;//storing to be deleted 
        head=head->next;
        free(dn);
      }
  }

void delete_at_end()
{ 
  if(head==NULL)
  {
    printf("NO Nodes\n");
  }
  else if(head->next ==NULL){
    printf("Deleted element is %d\n",head->data);
    return;
    free(head);
  }
  else{
    NODE *temp=head;
    while(temp->next->next !=NULL)
    {
      temp=temp->next;
    }
    printf("Deleted element is %d\n",temp->next->data);
    NODE *dn=temp->next;
    temp->next=NULL;
    free(dn);

  }
}
void insert_at_position(NODE *nn,int pos){
  if(pos==1){
    insert_at_head(nn);
  }
  else{
    NODE *temp=head;
    int c=1;
    while(c<pos-1){
      c++;
      temp=temp->next;
    }
    nn->next=temp->next;
    temp->next=nn;  
  }
}  

int main(){
     while(1)
     {
      int choice;
      printf("Enter\n 1.Insert at head\n 2.Insert at end\n 3. Delete at head\n 4.Delete at end \n 5.Insert at position\n  6.Deletion at position \n 7.Display anything else to exit");
      scanf("%d",&choice);
      if(choice == 1){
        //insert at head()
        int val;
        printf("Enter value to be inserted: ");
        scanf("%d",&val);
        NODE *nn=(NODE *)malloc(sizeof(NODE));
        nn->data=val;
        nn->next=NULL;
        insert_at_head(nn);
      }
      else if(choice==2){
        //insert at end()
        int val;
        printf("Enter value to be inserted: ");
        scanf("%d",&val);
        NODE *nn=(NODE *)malloc(sizeof(NODE));
        nn->data=val;
        nn->next=NULL;
        insert_at_end(nn);
      }
      else if(choice==3){
        //delete at head()
        delete_at_head();
      }
      else if(choice==4){
        //delete at end()
        delete_at_end();
      }
      else if(choice==5){
        //insert_at_position()
        NODE *nn=(NODE *)malloc(sizeof(NODE));
        int val;
        printf("Enter a value to be inserted: ");
        scanf("%d",val);
        nn->data=val;
        nn->next=NULL;
        int pos;
        printf("Enter the position to insert the node: ");
        scanf("%d",&pos);
        insert_at_position(nn,pos);
      }
      else if(choice==6){
        //delete at position()
      }
      else if(choice==7){
        display();
      }
      else{
        printf("harigathoi");
        break;
      }
    }
}