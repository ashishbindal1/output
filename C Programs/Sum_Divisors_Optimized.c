#include<stdio.h>
#include<stdlib.h>
int Sum_Divisors(int value){
    int i, sum =1;
    if(value==1){
        return 1;
    }
    for(i=2; i*i<value; i++){
        if(value % i==0){
            sum=sum+i+value/i;
        }}
    if(i*i==value){
        sum=sum+i;
        }
    return (sum+value);
    }
int main() {
    int value;
        printf("Enter a value");
        scanf("%d",& value);
        printf("%d", Sum_Divisors(value));
        return 0;
}