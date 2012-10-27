#include<stdio.h>
#include<ctype.h>
#define clear 27
# define size 4


int a[size],top,i,h;
int main()
{
	int num,c,f=1;
int push(int);
int pop();				

do
{
				printf("\npush = 1,pop = 2");
                                scanf("\n%d",&c);

  	switch(c)
  {
	case 1:
				printf("\nEnter the no u want to add in the stack");
				scanf("\n%d",&num);

				push(num);
			
		

        break;
 
	case 2:
	
	pop();

break;

	default:
        printf("\nInvalid");
  } 
printf("\nto exit loop press 7");
scanf("\n%d",&f);

}while(f!=7);
return 0;

}

				int  push(int num)
{
	printf("\n%d",top);			
	
	if(top>size)
				printf("\nStack is full");
	else
	{
				a[top]=num;
i= a[top];

top++;	
 




printf("\nno pushed is %d",i);
}
}

				int pop()
{
	
	if(top<=0)
				printf("\n Stack is empty nothing to pop");
	else
	{
				h=a[top];
				
				top--;
	
printf("\nno poped is %d",h);}
}

 
