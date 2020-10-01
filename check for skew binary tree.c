#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
};
int lef=0,rig=0;
struct node *new_node(int Data)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=Data;
    temp->right=NULL;
    temp->left=NULL;
    return temp;
};
void right_skew(struct node *root)
{   if(root!=NULL){
    if(root->left!=NULL)
    {rig++;}
    else
    {right_skew(root->right);}
    }
}
void left_skew(struct node *root)
{   if(root!=NULL){
    if(root->right!=NULL)
    {lef++;}
    else
    {left_skew(root->left);}
    }
}
struct node *ins(struct node* root,int value)
{
    int choice;
    if(root==NULL)
    {return new_node(value);}
    printf("\nPress:\n1:For right\n2:For left\nYour Choice:");
    scanf("%d",&choice);
    if(choice==1)
    {root->right=ins(root->right,value);}
    else if(choice==2)
    {root->left=ins(root->left,value);}
    else
    {printf("WRONG CHOICE");}
};
struct node* root=NULL;
int main()
{
    char choose;
    int num;
    do
    {   printf("Enter Value:");
        scanf("%d",&num);
        if(root==NULL)
        {root=ins(root,num);}
        else
            {ins(root,num);}
        printf("Do you want to insert a node again(y/n)?\n");
        scanf("%s",&choose);
    }while(choose!='n');

    left_skew(root);
    right_skew(root);
    if(rig==0)
    {printf("It is a right skew binary tree.");}
    else if(lef==0)
    {printf("It is a left skew binary tree.");}
    else
    {printf("It is not a skew binary tree.");}
    return 0;
}
