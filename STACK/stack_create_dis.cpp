/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

#define STACK_SIZE 5
int top;
int stack[10];
int item;

int isfull(int top)
{
    return top==STACK_SIZE-1;
}

int isempty()
{
    return top==-1;
}


void push()
{
    if(isfull(top))
    {
        printf("stack is full\n");
    }
    
    top = top+1;
    stack[top] = item;
}

int pop()
{
    if (isempty())
    {
        return -1;
    }
    
    return stack[top--];
}

void display()
{
    int i;
    
    if(top == -1)
    {
        printf("stack is empty\n");
        return;
    }
    
    printf("contents of the stack\n");
    for(i= 0 ; i<=top; i++){
        printf("%d ",stack[i]);
    }
    
    printf("\n");
}

int main()
{
    int item_deleted;  /* item to be deleted from stack */
    int choice;   /* user choice for push pop and display */
    top = -1;    /* indicates stack is empty */
    
    for(;;)
    {
        
        printf("1: push  2: pop\n");
        printf("3: display  4:exit\n");
        printf("enter the choice \n");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
                printf("enter the item to be inserted \n");
                scanf("%d",&item);
                push();
                break;
            case 2:
                item_deleted = pop();
                if(item_deleted == -1){
                    printf("stack is empty\n");
                }
                else
                {
                    printf("item deleted= %d\n" , item_deleted );
                }
                break;
            case 3:
                display();
                break;
            default:
                exit(0);
            
        }
        
    }
    
    

    return 0;
}
