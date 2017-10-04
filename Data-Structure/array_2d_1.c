#include<stdio.h>

void main(){

    int a[2][2];

    int i,j;

    printf("\n \t Enter the elements in 2x2 array : \n");
    for(i=0; i<2;i++){
        for(j=0; j<2; j++){
            printf("\t a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n \t You enterd :\n \t");
    for(i=0; i<2;i++){
        for(j=0; j<2; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n \t");
    }
}

/*
 * 1. WAP for addition, multiplication, div, sub of two 2x2 matrices.
 *
 */
