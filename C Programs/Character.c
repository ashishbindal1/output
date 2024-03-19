#include<stdio.h>
#include<stdlib.h>
char Character(char ch){
    if(ch>=65 && ch<=90){
        ch=ch+32;
    }
    else if(ch>=97 && ch<=122){
        ch=ch-32;
    }
    else{
        ch=-1;
        printf("-1");
    }
    return ch;
}
int main(){
    char ch;
    printf("Enter a character\n");
    scanf("%c",&ch);
    printf("%c",Character(ch));
    return 0;
}