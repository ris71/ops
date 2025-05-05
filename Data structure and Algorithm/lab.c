#include<stdio.h>
int main(){
int a[10],i,j,f,n;
printf("enter the elements");

for(i=0;i<10;i++)
   scanf("%d",&a[i]);
for (i=0;i<10;i++)
{
  n=a[i];
  f=0;
 for(j=2;j<n;j++)
 {
     if(n%j==0){
        f=1;
        break;
     }
 }
if(f==0)
printf("\n %d is prime number",n);
 }
return 0;

}
