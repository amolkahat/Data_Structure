#include<stdio.h>

void main(){
    int a, b;

    printf("\n \t Enter a : ");
    scanf("%d", &a);
    printf("\n \t Enter b : ");
    scanf("%d", &b);

    if (a >= 10 || b <= 20){
        printf("This child is able to play the game !!");
    }
    else{
        printf("This child is not able to play the game !!");
    }
}
