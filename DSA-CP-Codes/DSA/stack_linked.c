#include <stdio.h>
#include <stdlib.h>

struct stack
{
	int item;
	struct stack *next;
};

void push(struct stack **s, int data)
{
	struct stack *n,*t;
	n=malloc(sizeof(struct stack));
	n->item=data;
	n->next=NULL;

	if(*s==NULL)
	{
		*s=n;
	}
	else
	{
		t=*s;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=n;
	}
}

void pop(struct stack **s)
{
	struct stack *r,*t;
	if(*s==NULL)
	{
		printf("Empty\n");
	}
	else if((*s)->next==NULL)
	{
		*s=NULL;
		free(*s);
	}
	else
	{
		t=*s;
		r=(*s)->next;
		while(r->next!=NULL)
		{
			t=t->next;
			r=r->next;
		}
		t->next=NULL;
		free(r);
	}
}

void peek(struct stack **s)
{
	struct stack *t;
	if(*s==NULL)
	{
		printf("Stack is Empty\n");
	}
	else
	{
		t=*s;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		printf("\nTop Element: %d\n",t->item);
	}
}
	

int menu()
{
	int choice;
	printf("\n1.Enter PUSH to insert or append");
	printf("\n2.Enter POP to delete");
	printf("\n3.Exit");
	printf("\nEnter your choice: ");
	scanf("%d",&choice);
	return choice;
}

int main()
{
	struct stack *start;
	start=NULL;

	/*push(&start,10);
	push(&start,20);
	push(&start,30);
	push(&start,40);
	pop(&start);
	pop(&start);
	
	peek(&start);*/

	int data;
	while(1)
	{
		system("cls");
		peek(&start);
		switch(menu())
		{
			case 1:
			printf("Enter value: ");
			scanf("%d",&data);
			push(&start,data);
			break;

			case 2:
			pop(&start);
			break;

			case 3:
			exit(0);
			break;
			default:
			printf("Invalid choice\n");
			break;
		}
	}
}