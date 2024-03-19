#include<stdio.h>
#include<stdlib.h>

int main(){
    int grade1= 32,grade2=98;
    int *grade;
    grade=&grade1;
    printf("%d %d\n%p %d",grade1,grade1,&grade2,grade2);
    return 0;
}