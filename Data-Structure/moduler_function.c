#include<stdio.h>

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int mul(int a, int b){
    return a * b;
}


void main(){
    int ch;

    do{
        printf("\n \t Select the operation : ");
        printf("\n \t 1. Addition");
        printf("\n \t 2. Multiplication");
        printf("\n \t 3. Substraction");
        printf("\n \t 4. Exit");
        printf("\n \t Enter your choice : ");

        scanf("%d", &ch);

        switch(ch){
            case 1: printf("\n \t Addition : %d ", add(10, 20));
                    break;
            case 2: printf("\n \t Multiplication : %d ",mul(10, 20));
                    break;
            case 3: printf("\n \t Substration : %d ", sub(10, 20));
                    break;
            case 4: break;
            default: printf("\n \t Invalid choice");
                     break;
        }
    }while(ch!=4);
}
