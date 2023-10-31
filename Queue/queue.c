#include<stdio.h>
#include<stdlib.h>
int a[100];
int front=-1;
int rear=-1;

void insert();
void delete();
void print();

int main()
{
    int a=1;
    int choice;
    while(a==1)
    {
        printf("1 to insert in the queue\n");
        printf("2 to delete in the queue\n");
        printf("3 to print the entire queue\n");
        printf("4 to exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insert();
            break;
            case 2: delete();
            break;
            case 3: print();
            break;
            case 4: a=0;
            break;
            default: printf("wrong choice\n");

        }
    }
}


void insert()
{
    printf("Enter the number you want to enter\n");
    int x;
    scanf("%d",&x);
    if(front==-1 && rear==-1)
    {
        front=rear=0;
        a[rear]=x;
        printf("First element inserted\n");
    }
    else if(rear==99){
        printf("No space to store the element ");
        
    } else 
    {
        rear=rear+1;
        a[rear]=x;
    }
}

void print()
{
    if(front==rear)
    {
        printf("No element to display\n");
        return ;
    }
    for(int i=front;i<=rear;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

}


void delete()
{
    if(front==-1 || front==rear)
    {
        printf("No element to delete \n");
        return ;
    }
    printf("The element deleted is %d\n", a[front]);
    front=front+1;
}