#include<stdio.h>      // Write a c program for position of array
void main()

{
    int a[100],pos,item,size,i;
    printf("enter size of array");
    scanf("%d",&size);
    printf("enter array element");
    for(i=0;i<size;i++)
    {
         scanf("%d",&a[i]);
    }
    printf("enter the position of array");
    scanf("%d",&pos);
    printf("enter the item of array");
    scanf("%d",&item);
    for(i=size;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]= item;
    size++;
    printf("resultant array element");
    for(i=0;i<size;i++)
    {
        printf("%d \t",a[i]);
    }
    getch();
}

