#include<stdio.h>
#include<stdlib.h>
int Sum_Divisors(int value){
    int j=0;
    for(int i=1; i<=value/2; i++){
        if(value % i==0){
            j=j+i;
        }}
        return (j+value);
    }
    int main(){
        int value;
        printf("Enter a value");
        scanf("%d",& value);
        printf("%d", Sum_Divisors(value));
    }
