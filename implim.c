#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int stk[SIZE];
int sp=-1;
void main()
{
void push (int);
int pop();
void display();
int item,opt;
do{
printf("\n1.push\n2.pop\n3.display\n4.exit\n");
printf("enter your option:");
scanf("%d",&opt);
switch(opt){
case 1:printf("enter item:");
scanf("%d",&item);
push(item);
break;
case 2:item=pop();
if(item!=-9)
printf("poped value=%d\n",item);
break;
case 3:
display();
break;
case 4:
exit(0);
}
}
while(1);
}
void push(int x){
if(sp==SIZE-1){
printf("stack is full \n");
return;
}
else

stk[++sp]=x;
return;
}
int pop()
{
if(sp==-1)
{
printf("stack is empy \n");
return -9;
}
else
return stk[sp--];
}
void display(){
int i;
if (sp ==-1)
{
printf("stack is empty:\n");
return;
}
printf("stack elements are: \n");
for(int i=sp;i>=0;i--)
{
printf("%d\n",stk[i]);


}
}


