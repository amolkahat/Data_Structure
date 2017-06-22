#include<stdio.h>

int queue[20];
int front=0, rear=0;

void insert();
void pop();
void show();

void main(){
    int ch;

    do{
        printf("\n \t Queue Operations \n");
        printf("\t 1. Insert \n \t 2. Pop \n \t 3. Show Queue \n \t 4. Exit");
        printf("\n \t Enter your choice : ");
        scanf("%d", &ch);
        
        switch(ch){
            case 1: insert();
                    break;

            case 2: pop();
                    break;

            case 3: show();
                    break;

            case 4: break;

            default: printf("\n \t Invalid Choice. \n");
                     break;
        }
    }while(ch != 4);
}

void insert(){
    int no;
    printf("\n \t Enter no to insert : ");
    scanf("%d", &no);

    queue[front] = no;
    front++;
}

void pop(){
    printf("\n \t Removed element from queue : %d ", queue[rear]);
    rear++;
}

void show(){
    int i;
    i = rear;
    for(i = rear; i<= front; i++){
        printf(" %d ", queue[i]);
    }
}
