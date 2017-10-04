#include<stdio.h>

int a,b;

void add(){

    printf("\n \t Enter a : ");
    scanf("%d", &a);

    printf("\n \t Enter b : ");
    scanf("%d", &b);

}

void main(){

    add();
    printf("\n \t Add : %d", a + b);
}
