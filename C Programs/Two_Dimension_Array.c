#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define size1 2
#define size2 3

int main(){
    int arr[size1][size2]={{1,2,3},{4,5,6}};
    printf("[");
    for(int i=0; i<size1; i++){
        if(i>0){
            printf(" ");
        }
        for(int j=0; j<size2; j++){
            printf("%d", arr[i][j]);
            if(j<size2-1){
                printf(",");
            }
        }
        if(i<size1-1){
            printf("\n");
        }
    }
    printf("]");
}