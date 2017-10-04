#include<stdio.h>

void main(){
    
    int no = 182;

    if(no > 10){
        printf("Candidate is Qualified \n");

        if(no < 100){
            printf("Candidate is selected\n");
        }
        else{
            printf("Candidate is not Selected\n");
        }
    }
}
