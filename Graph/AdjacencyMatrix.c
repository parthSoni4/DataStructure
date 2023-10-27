#include<stdio.h>
#include<stdlib.h>
#define V 5
int a[V][V];
void create();
void print();
void add();
int main()
{
    // printf("%d", V);
    create();
    // print();
    int a=1;
    int choice;
    while(a==1)
    {
        printf("1 to insert a edge\n");
        printf("2 to print\n");
        printf("3 to create a new adjacency matrix\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: add();
        break;
        case 2: print();
        break;
        case 3: create();
        break;
        case 4: a=2;
        break;

        default: printf("you have entered a wrong choice\n");
            break;
        }
    }

    return 0;
}

void create()
{
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            a[i][j]=0;
        }
    }
}

void print()
{
    for(int i=0;i<V;i++)
    {
        printf("%d. ", i);
        for(int j=0;j<V;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void add()
{
    int x,y;
    printf("Enter the value where you want to insert the edge\n");
    scanf("%d %d", &x, &y);
    a[x][y]=1;
    a[y][x]=1;
}