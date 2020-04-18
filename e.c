#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	struct node *left;
	int data;
	struct node *right;
}node;

struct node* newnode()
{
	struct node *new;
	new=(struct node*)(malloc(sizeof(struct node*)));
	int data;
	printf("Enter data: ");
	scanf("%d",&data);
	if (data==0) //enter 0 for leaf node
	{
		return NULL;
	}


	new->data=data;
	
	printf("you are on left child of %d\n",data);
	new->left=newnode();
	printf("you are on right child of %d\n",data);
	new->right=newnode();
	return new;

}

void preorder(struct node *temp)		
{
	if(temp!=NULL)
	{
		printf("\n%d",temp->data);		
		preorder(temp->left);		
		preorder(temp->right);		
	}
}
void Inorder(struct node *temp)

{

    

    if(temp!=NULL)

    {

    Inorder(temp->left);

    printf(" %d",temp->data);

    Inorder(temp->right);

      

    }

}

void postorder(struct node *temp)

{

    

    if(temp!=NULL)

    {

    postorder(temp->left);
    postorder(temp->right);
    printf(" \n%d",temp->data);

    }
    else
    	return;

}

int main()
{
	int n;
	struct node* root;
	root=newnode();
	printf("Press 1 for preorder, 2 for inorder and 3 for postorder traversal: ");
	scanf("%d",&n);
	if(n==1)
	{
	printf("preorder traversal: ");
	preorder(root);
	}
	if(n==2)
	{
	printf("Inorder traversal");
	Inorder(root);
	}
	if(n==3)
	{
	printf("Inorder traversal");
	postorder(root);
	}


	return 0;
}