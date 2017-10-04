#include<stdio.h>

void main(){
    
    int no = 0;
    printf("Enter the no : ");
    scanf("%d", &no);

    if(no > 10 && no < 100){
        printf("Candidate is Qualified \n");

        printf("Candidate is selected\n");
    }
    else{
        printf("Candidate is not Selected\n");
    }
}
