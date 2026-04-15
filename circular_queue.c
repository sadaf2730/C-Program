#include<stdio.h>
#include<stdlib.h>

int queue[10];
int f = -1;
int r = -1;

void enqueue(int x){
    if ((r + 1 == f) || (f == 0 && r == 9)) {
        printf("\n Queue is full..");
    } else {
        if (f == -1) {
            f = r = 0;
        } else if (r == 9) {
            r = 0;
        } else {
            r++;
             queue[r] = x;
            printf("\n Value inserted successfully...");
        }
    }
}
void dequeue(){
    int x;

    if(f == -1){
        printf("\n Queue is empty");
    }else{
        x = queue[r];
        printf("\n Deleted value is %d , x");

        if(f==r){
            f=r=-1;
        }else if(f == 9){
            f=0;
        }
        else{
            f++;
        }
    }
}

void display(){
    if (f == -1){
        printf("\n Queue is empty"); 
    }else{
        printf("\n values from Queue are: ");
        
        if(f<=r){
            for(int i =f; i <=r; i++){
                printf("\n %d", queue[i]);
            }
        }else{
            for(int i =f; i<=9; i++)
                 printf("\n %d", queue[i]);
        
            for(int i =0; i<=r; i++)
                printf("\n %d", queue[i]);
        }
    }
}
int main(){
    int ch,n;

    while(1){
        printf("\n QUEUE OPERATIONS");
        printf("\n  1. Enqueue ");
        printf("\n  2. Dequeue");
        printf("\n  3. display");
        printf("\n  4. Quit");

        printf("\n Enter your choice");
        scanf("%d",&ch);

        switch(ch){

            case 1:
                printf("\n Enter any value");
                scanf("%d",&n);

                enqueue(n);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("\n Invalid choice");
        }
    }
    return 0;
}