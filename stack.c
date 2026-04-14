#include<stdio.h>
#include<stdlib.h>

int stack[4];
int top;

void push(int x)
{
    if(top ==3)
        printf("ERROR : stack is full ");
    else{
        top++;
        stack[top] = x;
        printf("\n value inserted successfully");
    }    
}

void pop(){
    int x;

    if(top == -1)
        printf("\n ERROR : Stack is empty");
    else{
        x = stack[top];
        top--;
        printf("\n Value Deleted Successfully...");
    }
}

void peek(){
    printf("\n Top most value is : %d " ,stack[top]);
}

void display(){
    if(top == -1)
        printf("\n Error : Stack is empty");
    else{
        printf("\n values in stack are");
        for(int i = 0; i <= top ; i++)
            printf("\n %d",stack[i]);
    }
}

int main(){
    
    int n , ch;
    top = -1;

    while(1){
        printf("\n Stack Operations");
        printf("\n 1. push");
        printf("\n 2. pop"); 
        printf("\n 3. peek");
        printf("\n 4. Display");
        printf("\n 5. Quit");

        printf("\n Enter Your Choice : ");
        scanf("%d",&ch);

        switch(ch){
             case 1:
                printf("\n Enter any value :");
                scanf("%d",&n);

                push(n);
                break;
            
            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                exit(0);

            Default:
                printf("\n  WARNING : Invalid Choice : ");
        }
    }
    return 0;
}