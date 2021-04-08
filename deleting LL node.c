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
	struct node *p,*q;		// for deleting node from L.L

	// creating L.L
	int x=1;
	while(x<=8)
	{
		// printf("%d\n",x);

		tmp->data = x++;
		tmp->next = (struct node *) malloc(sizeof(struct node));
		// if(x==3) p = tmp;			// tmp,p pointing node2
		// if(x==5) q = tmp;			// tmp,q pointing node4
		tmp = tmp->next;

		if(x==2) p = tmp;			// tmp,p pointing node2
		if(x==4) q = tmp;			// tmp,q pointing node4
	}

	// traversing and printing L.L
	printf("before deletion\n");
	tmp = head;
	while(1)
	{
		printf("%d,%p",tmp->data,tmp->next);
		if(--x == 1) break;
		printf(" -> ");
		tmp = tmp->next;
	}

	// deleting node3 from L.L
	p->next->next = NULL;		// node3 pointing NULL now
	p->next = q;		// node2 pointing node4 now

	// traversing and printing L.L
	printf("\n\nafter deletion\n");
	tmp = head;
	while(1)
	{
		printf("%d,%p",tmp->data,tmp->next);
		if(++x == 7) break;
		printf(" -> ");
		tmp = tmp->next;
	}
}

