#include<stdio.h>
#include<stdlib.h>

int main(){
    int Array[]={4,4,7,4,9}; int j=0;
    int size= sizeof(Array)/sizeof(Array[0]);
    for(int i=0; i<size; i++){
        if(Array[i]==Array[i-1]*Array[i+1]){
            j++;
        }
    }
    if(j>=1){
        printf("Good Neighbours");
    }
    else{
        printf("Bad Neighbours");
    }
    return 0;
}