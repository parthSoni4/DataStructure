#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char stack[50];
    char a[10];
    int top=-1;
    printf("Enter the string you want to check\n");
    scanf("%s",a);
    int len=strlen(a);
    // printf("The string is %s", a);
    for(int i=0;i<len;i++)
    {
        printf("%c",a[i]);

        if(a[i]=='(')
        {
            stack[++top]=a[i];
        }
        else if(a[i]==')')
        {
            if(stack[top]=='(')
            {
                // printf("closed");
                top--;
            }
        }

    }
        printf("Top of stack is %d", top);

    return 0;
}