/*#include<stdio.h>
#include<stdlib.h>
struct t_node{
  int data;
  struct t_node *left;
  struct t_node *right;
};
typedef struct t_node TreeNode;

TreeNode *create_tree_node(int val){
  TreeNode *nn = (TreeNode*)malloc(sizeof(TreeNode));
  nn->data = val;
  nn->left = NULL;
  nn->right = NULL;
  return nn;
}

TreeNode *constructBinaryTree(int *arr,int n){
   TreeNode *q[100];
    int front,rear;
    front=rear=0;
    q[rear++]=create_tree_node(arr[0]);
    int i=0;
    while(1){
      if(2*i+1>=n){
        break;
      }
      if(2*i+1<n){
        // creating a node with value at 2*i+1 index
        TreeNode *t=create_tree_node(arr[2*i+1]);
        q[rear++]=t;//adding it to queue
        q[front]->left=t;//connecting the left child
        }
      if(2*i+2<n){
        // creating a node with value at 2*i+2 index
        TreeNode *t=create_tree_node(arr[2*i+2]);
        q[rear++]=t;//adding it to queue
        q[front]->left=t;//connecting the right child
        }
        front++;
        i++;
      }
      return q[0];// root of the constructed binary tree
}

void in_order(TreeNode *root){
  if(root!=NULL){
    in_order(root->left);
    printf("%d ",root->data);
    in_order(root->right);
  }
}

int main(){
  int n;
  printf("Enter the size of the array: ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter array elements:\n ");
  for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  TreeNode *root = constructBinaryTree(arr,n);
  //checking the tree
  in_order(root);
}
*/

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left;
    struct node*right;;

};
typedef struct node Treenode;
void inorder(Treenode*root){
    if(root!=NULL){
       
        inorder(root->left);
         printf("%d ",root->data);
        inorder(root->right);

    }
}
Treenode *create_tree_node(int val){
    Treenode *nn=(Treenode *)malloc(sizeof(Treenode));
    nn->data=val;
    nn->left=NULL;
    nn->right=NULL;
    return nn;

}
Treenode*constructbt(int *a,int n){
    Treenode *q[100];
    int front,rear;
    front=rear=0;
    q[rear++]=create_tree_node(a[0]);
    int i=0;
    while(1){
        if(2*i+1>=n ){
            break;
        }
        if(2*i+1<n){
            //creating a node with value 2*i+1 index
            Treenode*t=create_tree_node(a[2*i+1]);
            q[rear++]=t;//adding it to queue
            q[front]->left=t;//connecting to the left child
        }
        if(2*i+1<n){
            //creating a node with value 2*i+2 index
            Treenode*t=create_tree_node(a[2*i+2]);
            q[rear++]=t;//adding it to queue
            q[front]->right=t;//connecting to the right child
        }
        front++;
        i++;

    }
    return q[0];//root of the constructed tree
}

int main(){
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     Treenode*root=constructbt(a,n);
     //checking the tree
     inorder(root);

}