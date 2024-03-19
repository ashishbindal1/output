#include<stdio.h>
#include<stdlib.h>
float average(float a, float b, float c){
    float avg=(a+b+c)/3;
    return avg;
}
int main(){
    float a,b,c;
    printf("Enter three numbers");
    scanf("%f %f %f",& a,& b,& c);
    float avrg=average(a,b,c);
    printf("Average= %.2f",avrg);
}