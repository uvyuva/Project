#include<stdio.h>
int stack[100]={0};
int top=-1;
void push(int c)
{
    stack[++top]=c;
}
void pop()
{
    stack[top--]=0;
}
int main()
{
    int n,max=0;
    int flag=1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(max<arr[i])
        max=arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        while(top!=-1 && stack[top]==flag)
        {
            flag++;
            pop();
        }
        if(arr[i]==flag)
        {
           flag++;
        }
        else
        {
        push(arr[i]);
        }
    }
    while(top!=-1 && stack[top]==flag)
    {
        flag++;
        pop();
    }
    if(flag==max+1)
    {
    printf("Happy");
    }
    else
    {
    printf("Sad");
    }
}
