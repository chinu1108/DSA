#include <stdio.h>
int stack[100],i,j,choice=0,n,top=-1;
void push();
void pop();
void show();
void main()
{
	printf("Enter the number of elements in the stack : ");
	scanf("%d", &n);
	printf("********** Stack Operations usings array****");
	printf("\n -----------------------\n");
	while(choice != 4)
	{
		printf("Choose the one from the below options...\n");
		printf("\n1.push\n2.pop\n3.show\n4.exit");
		printf("\n Enter the Choice : \n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				{
					push();
					break;
				}
				case 2:
				{
					pop();
					break;
				}
				case 3:
				{
					show();
					break;
				}
				case 4:
				{
					printf("exiting....");
					break;
				}
				default:
					{
						printf("please Enter vaild choice :");
					}
	    };
	}
}
void push()
{
	int val;
	if ( top == n)
	printf("\n Overflow");
	else
	{
		printf("Enter the value? : ");
		scanf("%d",&val);
		top = top +1;
		stack[top] = val;
	}
}
void pop()
{
    if ( top == -1)
	printf(" Underflow \n ");
	else
	top = top -1;	
}
void show()
{
	for (i=top;i>0;i--)
	{
		printf("%d\n",stack[i]);
	}
	if(top == -1)
	{
		printf("Stack is empty\n");
	}
}

