#include<stdio.h>
#include<stdlib.h>
int factorial(int number){
    if(number<0){
        return -1;
    }
    else{
        int factorial=1;
        for(int i=1; i<=number; i++){
            factorial=factorial*i;
        }
    return factorial;
}}
int main(){
    int number;
    printf("Enter a number\n");
    scanf("%d",& number);
    int fact=factorial(number);
    printf("Factorial= %d",fact);
    return 0;
}