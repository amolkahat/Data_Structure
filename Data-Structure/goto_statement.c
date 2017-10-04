#include<stdio.h>

void main(){
    for(int i = 0; i< 10; i++){
        
        if (i%2 == 0){
            goto even_no;
        }
    }
    even_no:{
                printf("\n \t This is even no\n");
            }
}
