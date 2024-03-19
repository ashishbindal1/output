#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define size 3

int main(){
    int arr[size];
    int arr_cpy[size];
    printf("Enter date in Day, Month, Year format\n");
    for(int i=0; i<size; i++){
        if(i==0){
        printf("Enter Day: ");
        }
        else if (i==1){
        printf("Enter Month: ");
        }
        else if(i==2) {
        printf("Enter Year: ");
        }
        scanf("%d",&arr[i]);
    }
    
    for(int j=0; j<size; j++){
        arr_cpy[j]=arr[j];
    }
    
    for(int k=0; k<size; k++){
        if(k==1 || k==2){
            printf("/");
        }
        printf("%d", arr_cpy[k]);
}
}