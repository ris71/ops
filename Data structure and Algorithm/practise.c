#include<stdio.h>
int main()
{
    int i,n,sum;
    scanf("%,&n");
    sum=0;
    for(i=100;i<=n;i=i-2)
    {
        sum=sum+i*i;
    }
    printf("%d",sum);
    return 0;

}
