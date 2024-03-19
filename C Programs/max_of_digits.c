#include<stdio.h>
#include<stdlib.h>
int max_of_digits(int digits){
    int r=digits%10;
    digits=digits/10;
    if(r>digits){
        return r;
    }
    else{
        return digits;
    }
}
int main(){
    int digits;
    printf("enter a two digit number\n");
    scanf("%2d",& digits);
    int Digi=max_of_digits(digits);
    printf("Max number is %d",Digi);
    return 0;
}