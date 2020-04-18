#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* link;
}*head;
void newnode();
void traverse();
void deletenode();


int main()
{
	
	int p;
	while(1==1)
	{
		printf("Enter the operation you wanna perform:\n 1 for newll \n 2 for traverse \n 3 for delete node ");
		scanf("%d",&p);

		if(p==1)
		{
			newnode();
		}

		if(p==2)
		{
			traverse();
		}

		if(p==3)
		{
			deletenode();
		}

		
		
	}

return 0;

}
void newnode()
{
	int data;
	int n;
	int i;
	printf("Enter number of nodes: \n");
	scanf("%d",&n);
	struct node *temp;
	head=(struct node*)malloc(sizeof(struct node));
	
	if(head==NULL)
	{
		printf("memory not allocated\n");
		return;
	}
	
	
	printf("enter node data: ");
	scanf("%d",&data);
	temp=head;
	head->data=data;
	head->link=NULL;
	for(i=2; i<=n; i++)
	{
		struct node *newnode=(struct node*)malloc(sizeof(struct node));
		if(newnode==NULL)
		{
			printf("Memory not allocated");
			return;
		}
		printf("Enter node data: ");
		scanf("%d",&data);
		newnode->data=data;
		newnode->link=NULL;
		temp->link=newnode;
		temp=temp->link;


	}
}
void traverse()
{
	struct node *temp1;
	temp1=head;
	int i;
	while(temp1!=NULL)
	{
	printf("%d\n",temp1->data);
	temp1=temp1->link;
	}
}

void deletenode()
{
	struct node *tm1;
	struct node *tm2;
	int k;
	int n;
	printf("Enter node to be deleted: ");
	scanf("%d",&k);
	n=1;
	tm1=head;
	while(tm1!=NULL)
	{

	
	

	if(n+1==k)
	{
		tm2=tm1->link;
		tm1->link=tm1->link->link;
		break;
	}
	
	tm1=tm1->link;
	n++;
	
	}
	free(tm2);

}

