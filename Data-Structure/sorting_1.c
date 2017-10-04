#include<stdio.h>

void main(){
    int a[10] = {3, 5, 6, 2, 4, 1, 38, 0, 28, -1};

    int i, j, temp, k;

    for(i=0; i< 10; i++){
        printf("\n \t Pass %d \n", i);
        for(j=0; j< 10; j++){

            if(a[i] < a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                printf("\n \t ");
                for(k=0; k< 10; k++){
                    printf("%d ", a[k]);
                }
            }
            else{
                printf("\n \t ");
                for(k=0; k< 10; k++){
                    printf("%d ", a[k]);
                }
            }

        }
    }

    printf("\n \t Sorted array is : \n");
    for(i=0; i<10; i++){
        printf("%d ", a[i]);
    }
}

