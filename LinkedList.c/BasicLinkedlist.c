#include<stdio.h>
#include<stdlib.h>

void insert();
void display();
void delete();

struct node {
    int data;
    struct node* next;
}node;
struct node *head=NULL;
int main()
{
    int a=1;
    int b;
    while(a==1)
    {
        printf("1 for insertion\n");
        printf("2 for display\n");
        printf("3 for delete\n");
        scanf("%d",&b);
        switch(b)
        {
            case 1: insert();
            break;
            case 2: display();
            break;
            case 3: delete();
            break;
        }
    }
}

void insert()
{
    int x;
    printf("Enter the value you want to insert\n");
    scanf("%d",&x);
    struct node* newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=x;

    if(head==NULL)
    {
        newNode->next=NULL;
        printf("new node created\n");
        head=newNode;
    }
    else {
        newNode->next=head;
        head=newNode;
    }
}


void display()
{
    struct node* temp;
    temp=head;
    printf("The linkedlist is as follows\n");
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void delete()
{
    int a;
    printf("Enter the value to delete\n");
    scanf("%d",&a);
    struct node* temp;
    temp=head;
    struct node*temp2;
    temp2=head->next;
    while(temp2!=NULL)
    {
        if(temp2->data==a)
        {
            printf("found");
            printf("here %d\n", temp->data);
            temp->next=temp2->next;
            printf("here %d\n",temp->data);
        }
        temp=temp2;
        temp2=temp2->next;
    }
}