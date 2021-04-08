#include <stdlib.h>                                                               
#include <stdio.h>                                                               

struct node 
{
	int data;
	struct node *next;
};

int main()
{
	struct node *tmp;		// pointer variable to create and traverse L.L
	tmp = (struct node *) malloc(sizeof(struct node));		// creating 'struct node' type pointer 'tmp' and allocating heap(dynamic) memory of size 'struct node'
	struct node *head = tmp;	// head pointing L.L

	// printf("%p",*tmp);

	// tmp->data = 2;
	// tmp->next = Null;

	// printf("\n%d",tmp->data);
	// printf("\n%p",tmp->next);

	// creating L.L
	int x=1;
	while(x<=8)
	{
		// printf("%d\n",x);
		tmp->data = x++;
		tmp->next = (struct node *) malloc(sizeof(struct node));
		tmp = tmp->next;
	}

	printf("L.L created\nx: %d\n\n",x);

	// traversing and printing L.L
	tmp = head;
	// while(x++ <= 5)
	// {
	// 	printf("%d,%p -> ",tmp->data,tmp->next);
	// 	tmp = tmp->next;
	// }
	
	// traversing and printing L.L
	while(1)
	{
		printf("%d,%p",tmp->data,tmp->next);
		if(--x == 1) break;
		printf(" -> ");
		tmp = tmp->next;
	}

	// printf("\n\nx: %d\n",x);
}

