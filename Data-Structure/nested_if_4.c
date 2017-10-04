#include<stdio.h>

void main(){
    int a = 1;
    int b = 0;
    printf("%d", a&b);
    
    
    char ch;
    printf("\n \t Enter your choice (y/n) : ");
    scanf("%c", &ch);

    if(!ch == 'y'){
        printf("We will proceed now !!");
    }
    else{
        printf("Please try again !!");
    }
}


// 1. WAP for finding the biggest no. 
// 2. WAP for fiding Percentage of the candidate of the given marks.
