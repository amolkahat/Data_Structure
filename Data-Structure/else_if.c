#include<stdio.h>

void main(){
    char ch;

    printf("\n \t Enter your choice ('a', 'd', 'v', 'e', 'q') :");
    scanf("%c", &ch);

    if(ch == 'a'){
        printf("You choose 'a'");
    }
    else if(ch == 'd'){
        printf("You choose 'd'");
    }
    else if(ch == 'v'){
        printf("You choose 'v'");
    }
    else if(ch == 'e'){
        printf("You choose 'e'");
    }
    else if(ch == 'q'){
        printf("You choose 'q'");
    }
    else{
        printf("ERROR: Invalid choice.");
    }
}
