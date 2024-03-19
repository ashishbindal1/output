#include<stdio.h>
#include<stdlib.h>
double Sequence(int length){
    double number=9.0;
    double sequence=number;
    for(int i=1; i<length; i++){
        sequence=(sequence*10)+number;
    }
    return sequence;
}
int Sequence_new(int length){
    printf("Sequence= ");
    for(int i=1; i<=length; i++){
        printf("%d",i);
        if(i<length){
            for(int j=1;j<2;j++){
                printf(",");
        }}
    }
    return 0;
}
int main(){
    int length;
    printf("Enter length\n");
    scanf("%d",& length);
    if(length<=9){
       Sequence_new(length); 
    }
    else if(length>9){
        printf("Sequence= %.0lf",Sequence(length));
    }
    return 0;
}