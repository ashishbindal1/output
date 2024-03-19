#include<stdio.h>
#include<stdlib.h>
int Return_Number(char nemo, char tom, char goffy){
    if(nemo>=48 && nemo<=57 && tom>=48 && tom<=57 && goffy>=48 && goffy<=57){
        int ch1=nemo-'0';
        int ch2=tom-'0';
        int ch3=goffy-'0';
        int n=(ch1*10)+ch2;
        n=(n*10)+ch3;
        return n;
    }
    else{
        return '0';
    }
}
int main(){
    char nemo,tom,goffy;
    printf("Enter three numbers\n");
    scanf("%c %c %c",& nemo,& tom,& goffy);
    printf("%d",Return_Number(nemo,tom,goffy));
}