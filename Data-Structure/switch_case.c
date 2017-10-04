#include<stdio.h>

void main(){
    int no;

    printf("\n \t Enter the no : ");
    scanf("%d", &no);

    switch(no){
        case 1: printf("\n \t No 1 is selected\n");
                break;

        case 2: printf("\n \t No 2 is selected\n");
                break;

        default: printf("\n \t Invalid Choice\n");
                 break;
    }
}
