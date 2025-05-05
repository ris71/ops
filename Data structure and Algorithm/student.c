#include<stdio.h>
struct student{
 char name[50];
 int rollNo;
 float marks;
};
int main(){

struct student students[3]={
{"Alice", 101,92.5},
{"Bob",102, 89.7},
{"Charlie",103,78.9}
};
for(int i=0;i<3;i++)
{
    printf("\n students %d \n",i+1);
    printf("Name: %s\n", students[i].name);
    printf("Roll No: %d \n", students[i].rollNo);
    printf("Marks: %.2f \n", students[i].marks);
}
return 0;
}
