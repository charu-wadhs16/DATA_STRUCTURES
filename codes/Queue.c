
#include<stdio.h>
# define max 10

int Insert(int queue[],int front,int rear)                 // Insert element in the queue
{
  int n;
  if((rear+1)%max==front)
  {
      printf("\n Queue is full.");
  }
  else
  {
      printf("\n Enter the element to be added");
      scanf("%d",&n);
      rear=(rear+1)%max;
      queue[rear]=n;
      if(front==-1)
      {
          front++;
      }
  }

  return rear;
}

  int Serve(int queue[],int front,int rear)                   // Delete element from the queue
  {

  if(front==-1)
  {
      printf("\n Queue is empty.");
  }
  else if(front==rear)
  {
      printf("%d",queue[front]);
      front=-1;
      rear=-1;
  }
  else
  {
      printf("%d",queue[front]);
      front=(front+1)%max;

  }

  return front;
  }
  void Display(int queue[],int front,int rear)                    // Display the elements of the queue
  {   int temp=front;
      if(front==-1)
       {
      printf("\n Queue is empty.");
       }
       else
       {

       while(temp!=rear)
       {
           printf("%d ",queue[temp]);
           temp=(temp+1)%max;
       }
       printf("%d",queue[temp]);
       }
  }

void main()
{
    int queue[max],ch,front=-1,rear=-1;
    int f,r;
    do
    {
        printf("\n Enter 1 for Enqueue or Insert \n Enter 2 for Dequeue or Delete \n Enter 3 for Display \n Enter 4 to exit \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: rear=Insert(queue,front,rear);
                     if(front==-1)
                     {
                      front++;
                     }
                    break;
            case 2: front=Serve(queue,front,rear);
                    if(front==-1)
                    {
                      rear=-1;
                    }
                    break;
            case 3: Display(queue,front,rear);
                    break;
            case 4: printf("Thank you!");
                    break;

            default:printf("Invalid choice");
        }                                                         // End of switch
    }
    while(ch!=4);                                                // End of while


}                                                               // End of main()
