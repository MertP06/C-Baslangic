#include <stdio.h>

struct node{
	
int data;
struct node *next;
struct node *prev;
};

struct node *top = NULL; 

void push(int veri)
{
	struct node* eklenecek = (struct node*)malloc(sizeof(struct node));
	eklenecek->data = veri;
	eklenecek->next = NULL;
	if(top != NULL)
		eklenecek->next = top;
		top = eklenecek;
	
}

void pop()
{
	if(top->data == NULL)
	{
		printf("stack zaten bos");
		
	}
	else
	{
		struct node* temp;
		temp = top;
		top = top->next;
		free(temp);
	}
}

void yazdir()
{
	struct node* q;
	q = top;
	printf("\n");
	while(q!=NULL)
	{
		printf("%d ==> ", q->data);
		q=q->next;
	}
	printf("NULL ");
}


int main()
{
	int secim;
	while(1==1)
	{
		printf("\n 1-Push");
		printf("\n 2-Pop");
		printf("\nYapmak istediginiz islemi secin: ");
		scanf("%d",&secim);
		
		switch(secim)
		{
			case 1:
				printf("eklemek istediginiz sayi: ");
				scanf("%d",&secim);
				push(secim);
				yazdir();
				break;
			case 2:
				pop();
				yazdir(); 	
				break;
				
		}
	}
 




	return 0;
}
