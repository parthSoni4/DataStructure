#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* top=NULL;
void insert();
void display();
void delete();
int main()
{
    
    int choice;
    int loop=1;
    while(loop==1)
    {
        printf("1 to insert into stack\n");
        printf("2 for display\n");
        printf("3 for exit\n");
        printf("4 for delete\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insert();
            break;
            case 2: display();
            break;
            case 3: loop=0;
            break;
            case 4: delete();
            break;
            default: printf("Wrong choice\n");
        }
    }
}

void insert()
{
    int number;
    printf("Enter the number to insert\n");
    scanf("%d",&number);
    struct node* newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=number;
    if(top==NULL)
    {
        printf("first node inserted\n");
        
        newNode->next=NULL;
        top=newNode;

    }
    else{
        newNode->next=top;
        top=newNode;
    }
}

void display()
{
    struct node*temp;
    temp=top;
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");

}

void delete()
{
    printf("The element deleted is %d\n",top->data);
    top=top->next;
}