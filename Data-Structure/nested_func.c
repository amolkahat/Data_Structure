#include<stdio.h>


int add(int a, int b){

    int mul(int a, int b){
        return a * b;
    }

    return a + b + mul(a, b);
}

void main(){

    printf("\n \t Addition : %d ", add(10, 20));
}
