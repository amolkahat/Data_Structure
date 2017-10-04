#include<stdio.h>

void main(){
    int i = 0;

    while(i<10){
        printf("%d", i);
        if(i == 5){
            break;
        }
        i++;
    }
    printf("\n i=%d",i); 
    printf("\nBye bye");
}
