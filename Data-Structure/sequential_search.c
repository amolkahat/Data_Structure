#include<stdio.h>


void main(){
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int ch;
    printf("Enter no you want to search : ");
    scanf("%d", &ch);

    for(int i = 0; i < 10; i++){
        if (a[i] == ch){
            printf("\n \t Your no found at location %d", i+1);
            break;
        }
    }
}
