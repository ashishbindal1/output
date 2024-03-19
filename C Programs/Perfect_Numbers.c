#include<stdio.h>
#include<stdlib.h>
int Perfect_Number(int value){
    int sum=0;
    for(int i=1; i<=value/2; i++){
        if(value % i==0){
            sum=sum+i;
        }}
    return sum;
    }
    int main(){
        int value;
        printf("Enter a number\n");
        scanf("%d",& value);
        int function=Perfect_Number(value);
        if(value==function){
            printf("Perfect Number %d",function);
        }
        else{
            printf("Not a Perfect number %d",function);
        }
        return 0;
    }