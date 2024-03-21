#include<stdio.h>
#include<stdlib.h>
struct NODE
{
	int data;
	struct NODE *next;
};
	typedef struct NODE  *node;
//node reverse(node head);
node insert_rear(node head);
node insert_front(node head);
node getnode();

node read_details();
void display_list(node head);
node insert_pos(int pos,node head);
node delete_rear(node head);
node delete_front(node head);
//node delete_pos(int pos,node head);

main()
{
node head = NULL;
	int choice,pos;
	for(;;)
	{
printf("1-Insert Rear\n 2-Display\n 3-Insert front \n 4-Insert Position 5- Delete rear \n 6- Del front\n 7:Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("Enter VALUE FOR DATA FIELD\n");
			        head=insert_rear(head);
			        break;
			case 2: printf("Display List Inserted\n");
			        display_list(head);
			        break;
			case 3 : printf("Enter item to be Inserted\n");
			        head=insert_front(head);
			        break;
           case 4 : printf("Enter the position to be Inserted\n");
			        scanf("%d",&pos);
			        head=insert_pos(pos,head);
			        break;
			case 5: printf("Rear element delete\n");
			        head=delete_rear(head);
			        break;
			case 6:printf("front element delete\n");
			         head=delete_front(head);
			           break;

			default:printf("Invalid choice");
		}
		}
}
node getnode()
{
	node new;
	new=(node)malloc(sizeof(struct NODE));
	if(new==NULL)
	{
		printf("Not created\n");
		exit(0);
	}
	new->next = NULL;
	return new;
}
node insert_rear(node head)
{
	node new,cur;
	new=read_details();
		new ->next = NULL;
	if(head==NULL)
	.
	
	  return new;
	cur=head;
	while(cur->next !=NULL)
	{
		cur=cur->next;
	}
	cur->next = new;
	return head;
}
node read_details()
{
    node temp;
    temp = getnode();
    printf("Enter the data\n");
    scanf("%d",&temp->data);
    return temp;
}

node insert_front(node head)
{
	node new;
	new=read_details();
	new ->next = NULL;
	if(head==NULL)
	  return new;
	new->next = head;
	head=new;
	return head;
}
node delete_front(node head)
{ node cur;
    if(head==NULL)
	  {
	      printf("list empty\n");
	      return head;}
	  cur=head;
	  head=head->next;
	  printf("Deleted: %d\n", cur->data);
free(cur);
	  return head;
}
node insert_pos(int pos, node head)
{

    node new,prev,cur;
    int count;
    new=read_details();
	new ->next = NULL;
	if(head==NULL &&pos==1)
	  return new;
    if(head==NULL)
    {

        printf("invalid position\n");
        return head;
    }
if(pos==1)
{

    new->next=head;
    return new;
}
count=1;
prev=NULL;
cur=head;
while(cur!=NULL && count!=pos)
{

    prev=cur;
    cur=cur->next;
    count++;
}
if(count==pos)
{

    prev->next=new;
    new->next=cur;
    return head;
    }
    else
        printf("Invalid position\n");
    return head;
}
node delete_rear(node head)
{
	node prev,cur;
	if(head==NULL)
	{
		printf("List empty\n");
		return head;
	}
	if(head->next==NULL)
	{
		printf("Deleted: %d\n", head->data);
		free(head);
		return NULL;
	}
	prev=NULL;
	cur=head;
	while(cur->next!=NULL)
	{
		prev=cur;
		cur=cur->next;
	}
	printf("Deleted node: %d\n",cur->data);
	free(cur);
	prev->next=NULL;
	return head;
}

node delete_pos(int pos,node head)
{
    node cur,prev;
    int count;

    if(head==NULL)
	{
		printf("List empty\n");
		return NULL;
	}
	if(pos==1)
	{
        cur=head;
	    head=head->next;
	 printf("Deleted: %d\n", cur->data);

	    free(cur);
	    return head;
	}
	prev=NULL;
	cur=head;
	count=1;
	while(cur!=NULL && count!=pos)
	{
	    prev=cur;
	    cur=cur->next;
	    count++;
	}
	if(cur==NULL)
	{

	    printf("invalid position specified\n");
	    return head;

	}
	prev->next=cur->next;
	printf("Deleted: %d\n", cur->data);
		//free(head);
	free(cur);
	return head;
}
node reverse(node head)
{
    node cur,t;
    cur=NULL;
    while(head!=NULL);
    {
        t=head;
        head=head->next;
        t->next=cur;
        cur=t;
    }
    return cur;
}
void display_list(node head)
{
	node cur;
	if(head==NULL)
	{
		printf("Empty List\n");
		return;
	}
	printf("elements are\n");
	cur=head;
	while(cur!=NULL)
	{
		printf("%d\n",cur->data);
		cur= cur->next;
	}
	printf("\n");
}
node search(node head)
{
    int key;
    node cur;
    cur=head;
    while(cur!=NULL)
    {
     if(cur->data==key)
     {
        return 1;
        break;
        cur=cur->next;
    }
    else
    {
        printf("key not found");
    }
}
}
#include<stdio.h>
#include<stdlib.h>
struct NODE
{
	int data;
	struct NODE *next;
};
	typedef struct NODE  *node;
//node reverse(node head);
node insert_rear(node head);
node insert_front(node head);
node getnode();

node read_details();
void display_list(node head);
node insert_pos(int pos,node head);
node delete_rear(node head);
node delete_front(node head);
//node delete_pos(int pos,node head);

main()
{
node head = NULL;
	int choice,pos;
	for(;;)
	{
printf("1-Insert Rear\n 2-Display\n 3-Insert front \n 4-Insert Position 5- Delete rear \n 6- Del front\n 7:Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("Enter VALUE FOR DATA FIELD\n");
			        head=insert_rear(head);
			        break;
			case 2: printf("Display List Inserted\n");
			        display_list(head);
			        break;
			case 3 : printf("Enter item to be Inserted\n");
			        head=insert_front(head);
			        break;
           case 4 : printf("Enter the position to be Inserted\n");
			        scanf("%d",&pos);
			        head=insert_pos(pos,head);
			        break;
			case 5: printf("Rear element delete\n");
			        head=delete_rear(head);
			        break;
			case 6:printf("front element delete\n");
			         head=delete_front(head);
			           break;

			default:printf("Invalid choice");
		}
		}
}
node getnode()
{
	node new;
	new=(node)malloc(sizeof(struct NODE));
	if(new==NULL)
	{
		printf("Not created\n");
		exit(0);
	}
	new->next = NULL;
	return new;
}
node insert_rear(node head)
{
	node new,cur;
	new=read_details();
		new ->next = NULL;
	if(head==NULL)
	  return new;
	cur=head;
	while(cur->next !=NULL)
	{
		cur=cur->next;
	}
	cur->next = new;
	return head;
}
node read_details()
{
    node temp;
    temp = getnode();
    printf("Enter the data\n");
    scanf("%d",&temp->data);
    return temp;
}

node insert_front(node head)
{
	node new;
	new=read_details();
	new ->next = NULL;
	if(head==NULL)
	  return new;
	new->next = head;
	head=new;
	return head;
}
node delete_front(node head)
{ node cur;
    if(head==NULL)
	  {
	      printf("list empty\n");
	      return head;}
	  cur=head;
	  head=head->next;
	  printf("Deleted: %d\n", cur->data);
free(cur);
	  return head;
}
node insert_pos(int pos, node head)
{

    node new,prev,cur;
    int count;
    new=read_details();
	new ->next = NULL;
	if(head==NULL &&pos==1)
	  return new;
    if(head==NULL)
    {

        printf("invalid position\n");
        return head;
    }
if(pos==1)
{

    new->next=head;
    return new;
}
count=1;
prev=NULL;
cur=head;
while(cur!=NULL && count!=pos)
{

    prev=cur;
    cur=cur->next;
    count++;
}
if(count==pos)
{

    prev->next=new;
    new->next=cur;
    return head;
    }
    else
        printf("Invalid position\n");
    return head;
}
node delete_rear(node head)
{
	node prev,cur;
	if(head==NULL)
	{
		printf("List empty\n");
		return head;
	}
	if(head->next==NULL)
	{
		printf("Deleted: %d\n", head->data);
		free(head);
		return NULL;
	}
	prev=NULL;
	cur=head;
	while(cur->next!=NULL)
	{
		prev=cur;
		cur=cur->next;
	}
	printf("Deleted node: %d\n",cur->data);
	free(cur);
	prev->next=NULL;
	return head;
}

node delete_pos(int pos,node head)
{
    node cur,prev;
    int count;

    if(head==NULL)
	{
		printf("List empty\n");
		return NULL;
	}
	if(pos==1)
	{
        cur=head;
	    head=head->next;
	 printf("Deleted: %d\n", cur->data);

	    free(cur);
	    return head;
	}
	prev=NULL;
	cur=head;
	count=1;
	while(cur!=NULL && count!=pos)
	{
	    prev=cur;
	    cur=cur->next;
	    count++;
	}
	if(cur==NULL)
	{

	    printf("invalid position specified\n");
	    return head;

	}
	prev->next=cur->next;
	printf("Deleted: %d\n", cur->data);
		//free(head);
	free(cur);
	return head;
}
node reverse(node head)
{
    node cur,t;
    cur=NULL;
    while(head!=NULL);
    {
        t=head;
        head=head->next;
        t->next=cur;
        cur=t;
    }
    return cur;
}
void display_list(node head)
{
	node cur;
	if(head==NULL)
	{
		printf("Empty List\n");
		return;
	}
	printf("elements are\n");
	cur=head;
	while(cur!=NULL)
	{
		printf("%d\n",cur->data);
		cur= cur->next;
	}
	printf("\n");
}
node search(node head)
{
    int key;
    node cur;
    cur=head;
    while(cur!=NULL)
    {
     if(cur->data==key)
     {
        return 1;
        break;
        cur=cur->next;
    }
    else
    {
        printf("key not found");
    }
}
}