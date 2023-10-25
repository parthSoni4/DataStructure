#include<stdio.h>
int a[10];
void insert();
void rev();
void print(int *z);
void rotation();
void rotationRight();
int main()
{
    
    int b;
    b=1;
    int c;
    while(b==1)
    {
        printf("1 for insertion\n");
        printf("2 for reverse\n");
        printf("3 for printing\n");
        printf("4 for exit\n");
        printf("5 for rotation\n");
        printf("6 for rotation right\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1: insert();
            break;
            case 2: rev();
            break;
            case 3: print(a);
            break;
            case 4: b=2;
            break;
            case 5: rotation();
            break;
            case 6: rotationRight();
            break;
            default: printf("wrong option\n");

        }
    }
}

void insert()
{
    printf("\nEnter the element in array\n");
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
}
void rev()
{
    int i;
    int j=0;
    int b[10];
    for(i=9;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    print(b);
    
}
void print(int *z)
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("%d ", z[i]);
    }
    printf("\n");
}


// a={1,2,3,4}
// first 
// prev=2, a[1]=1, a[0]=2 => {2,1,3,4}
// prev=3, a[2]=1, a[1]=3 => {2,3,1,4}
// prev=4, a[3]=1, a[2]=4 => {2,3,4,1}
void rotation()
{
    int i;
    int prev;
    prev=a[0];
    for(i=0;i<10;i++)
    {
        if(i!=9)
        {
       
            prev=a[i+1];
            a[i+1]=a[i];
            a[i]=prev;

        }
        
    }
}

// input ={1,2,3,4}
// output={4,1,2,3}
