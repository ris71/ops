  #include<stdio.h>
  #include<conio.h>
  void main()
  {
      int a[100],i,pos,item,size;
      printf("enter the size of array");
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
      for(i=size;i<=pos;i--)
      {

         a[i]=a[i-1];
      }
      a[pos]=item;
      size++;
      printf("result of array");
      for(i=0;i<size;i++)
      {
          printf("%d",a[i]);
      }
      getch();
  }
