#include<stdio.h>
#include<stdlib.h>
int Area_Of_Rectangle(int length, int width){
    int Area=length*width;
    return Area;
}
int main(){
    int length, width;
    printf("Enter length and width\n");
    scanf("%d %d",& length,& width);
    int arr=Area_Of_Rectangle(length,width);
    printf("Area= %d",arr);
    return 0;
}