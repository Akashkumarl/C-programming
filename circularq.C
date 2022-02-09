#include <stdio.h>
#include <stdlib.h>
int n = 50;
int q[],r=-1,f=-1;
int item;
int isempty()
{
     if(f==-1)
     return 1;
     else
     return 0;
}
 int isfull()
 {
     if((f==r+1)||((f==0)&&(r==n-1)))
     return 1;
     else
     return 0;
 }
 void insertq( int item)
 {
      if(isfull())
      printf("the queue is full");
      else
      if(f==-1)
      f=r=0;
      else
      r=(r+1)%n;
      q[r]=item;
 }
 int delq()
 {
     if(isempty())
     printf("queue is empty");
     else
     {item=q[f];
      if(f==r)
      f=r=-1;
      else
      f=(f+1)%n;
     }return(item);
 }
 void display()
 { int i;
   for(i=f;i!=r;i=(i+1)%n)
   printf("%d",q[i]);
   printf("%d",q[i]);
 }
 int main()
 {
     int ch;
     do{
         printf("\n1.insert\n2.Delete\n3.Display\n4.exit");
         scanf("%d",&ch);
         switch(ch)
     {
         case 1 :{ 
                  printf("enter the element to be inserted");
                  scanf("%d",&item);
                  insertq(item);
                  break;}
         case 2 :{ int val=delq();
                  if(val!=-1)
                  printf(" %d item is deleted",q[val]);
                  break;}
         case 3 : display();
                  break;
         case 4:exit(0);
     }
     }while(1);
     return 0;
                 
 }
