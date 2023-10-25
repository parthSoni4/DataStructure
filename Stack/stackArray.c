#include<stdio.h>
#include<stdlib.h>
void insert();
void display();
void delete();
int a[100];
int top=-1;

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
    printf("Enter the number you want to insert\n");
    scanf("%d",&number);
    if(top==99)
    {
        printf("No space in the stack\n");
        return ;
    }
    else if(top==-1)
    {
        printf("First number inserted");
    }
    else{
        printf("Number inserted at %d", top+1);
    }
    top=top+1;
    a[top]=number;
    return ;
}
void display()
{
    if(top==-1)
    {
        printf("No number to show \n");
    }
    else {
        for(int i=0;i<=top;i++)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

void delete()
{
    if(top==-1)
    {
        printf("No element to delete\n");
        return ;
    }
    else if(top==0){
        printf("Last elemented deleted\n");
        top=-1;

    }
    else{
        printf("Elemeneted deleted at %d\n", a[top]);
        top=top-1;
    }
}