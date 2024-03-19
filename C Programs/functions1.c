#include<stdio.h>
#include<stdlib.h>
int max(int a, int b, int c){
    if(a>b && a>c){
        return a;   
    }
    else if(b>c && b>a){
        return b;
    }
    else{
        return c;
    }
}
int main(){
    int a,b,c;
    printf("Enter three number");
    scanf("%d %d %d",& a,& b,& c);
    int maximum=max(a,b,c);
    printf("Max is %d",maximum);
    return 0;
}