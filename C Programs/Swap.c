#include<stdio.h>
#include<stdlib.h>

int main(){
    int x = 5, y=4;
    x=x+y;
    y=x-y;
    x=x-y;
    printf("x= %d, y= %d",x,y);
}