#include <stdio.h>
#include <conio.h>
#include <malloc.h>
struct node
{
int data;
struct node *left;
struct node *right;
};
typedef struct node NODE;
NODE *tree;
void create_tree(NODE *);
NODE *insertElement(NODE *, int);
void preorderTraversal(NODE *);
void inorderTraversal(NODE *);
void postorderTraversal(NODE *);
int main()
{
int option, val;
NODE *ptr;
create_tree(tree);
while(1)
{
printf("\n Enter your option\n");
printf("\n 1. Insert Element");
printf("\n 2. Preorder Traversal");
printf("\n 3. Inorder Traversal");
printf("\n 4. Postorder Traversal");
printf("\n 5. Exit");
scanf("%d", &option);
switch(option)
{
case 1:
printf("\n Enter the value of the new node : ");
scanf("%d", &val);
tree = insertElement(tree, val);
break;
case 2:
printf("\n The elements of the tree are : \n");
preorderTraversal(tree);
break;
case 3:
printf("\n The elements of the tree are : \n");
inorderTraversal(tree);
break;
case 4:
printf("\n The elements of the tree are : \n");
postorderTraversal(tree);
break;
case 5:
exit(0);
break;
default:
printf("Invalid case\n");
break;
}
}
return 0;
}
void create_tree(NODE *tree)
{
tree = NULL;
}
NODE *insertElement(NODE *tree, int val)
{
NODE *ptr, *nodeptr, *parentptr;
ptr = (NODE *)malloc(sizeof(NODE));
ptr->data = val;
ptr->left = NULL;
ptr->right = NULL;
if(tree==NULL)
{
tree=ptr;
tree->left=NULL;
tree->right=NULL;
}
else
{
parentptr=NULL;
nodeptr=tree;
while(nodeptr!=NULL)
{
parentptr=nodeptr;
if(val<nodeptr->data)
nodeptr=nodeptr->left;
else
nodeptr = nodeptr->right;
}
if(val<parentptr->data)
parentptr->left = ptr;
else
parentptr->right = ptr;
}
return tree;
}
void preorderTraversal(NODE *tree)
{
if(tree != NULL)
{
printf("%d\t", tree->data);
preorderTraversal(tree->left);
preorderTraversal(tree->right);
}
}
void inorderTraversal(NODE *tree)
{
if(tree != NULL)
{
inorderTraversal(tree->left);
printf("%d\t", tree->data);
inorderTraversal(tree->right);
}
}
void postorderTraversal(NODE *tree)
{
  if(tree != NULL)
{
postorderTraversal(tree->left);
postorderTraversal(tree->right);
printf("%d\t", tree->data);
}
}