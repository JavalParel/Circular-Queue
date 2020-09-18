#include <stdio.h>
#include<stdlib.h>
#define MAX 5
int queue_array[MAX];
int rear = - 1;
int front = - 1;
void insert()
{
int item,num=0;
printf("Enter number of element you want to insert :");
scanf("%d",&num);
for(int i=0;i<num;i++)
{
if(rear == MAX - 1 && front==0 || front == rear + 1)
	printf("Queue Overflow \n");
else
{
if(front == - 1)
	front = 0;
printf("Inset the element in queue : ");
scanf("%d", &item);
if(rear+1>MAX-1)
	rear=0;
else
	rear = rear + 1;
queue_array[rear] = item;
}
}
}
void delete()
{
if(front == - 1)
{
printf("Queue Underflow \n");
return;
}
else
{
printf("Element deleted from queue is : %d\n", queue_array[front]);
if(rear==front)
{
rear=-1;
front=-1;
}
else if(front==MAX-1 && rear == -1){
	front=-1;
	
}
else if(front==MAX-1){
front=0;

}

else
	front+=1;
}
}
void display()
{
int i;
if(front == - 1)
printf("Queue is empty \n");
else
{
printf("Queue is :\n");
	if(front<=rear){
	for(i = front; i <= rear; i++)
		printf("| %d |\n", queue_array[i]);
	printf("\n");
	}
	else if(front>rear){
	for(i = front; i < MAX; i++)
		printf("| %d |\n", queue_array[i]);
		
	for(i = 0; i <= rear; i++)
		printf("| %d |\n", queue_array[i],i);
	printf("\n");
	}
	else{
	
			printf("\n");
		}
}
}

int main()
{
int choice;

while (1)
{
printf("1.Insert element to queue \n");
printf("2.Delete element from queue \n");
printf("3.Display all elements of queue \n");
printf("4.Quit \n");
printf("Enter your choice : ");
scanf("%d", &choice);
switch(choice)
{
case 1:

	insert();
printf("\n");
display();
break;
case 2:
delete();
printf("\n");
display();
break;
case 3:
display();
break;
case 4:
exit(1);
default:
printf("Wrong choice n");
}
}
}


