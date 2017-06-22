#include<stdio.h>

int stack[20];
int top = 0;
void push();
void pop();
void show();

int main(){
    int ch;

    do{
        printf("\n \t Stack Operations \n");
        printf("\t 1. Push \n \t 2. Pop \n \t 3. Show stack \n \t 4. Exit");
        printf("\n \t Enter your choice : ");
        scanf("%d", &ch);

        switch(ch){
            case 1: push();
                    break;
            
            case 2: pop();
                    break;

            case 3: show();
                    break;

            case 4: break;
            default: printf("\n \t Invaild choice.\n");
                     break;
        }
    }while(ch != 4);
}

void push(){
    int no;
    if(top < 20){
        printf("\n \t Enter element to insert : ");
        scanf("%d", &no);
        stack[top] = no;
        top++;
    }else{
        printf("\n \t Stack Overflow. \n \a");
    }
}

void pop(){
    if(top >= 0){
        top--;
        printf("\n \t Element %d is removed form stack \n", stack[top]);
        stack[top] = 0;
    }else{
        printf("\n \t Stack Underflow. \n \a");
    }
}

void show(){
    int i;

    for(i=0; i<top; i++){
        printf(" %d ", stack[i]);
    }
}
