#include<stdio.h>
#include<stdlib.h>
float Amount_Average(int num, int digit){
    int s=0, count=0;
    while(num!=0){
        float r=num%10;
        if(r<digit){
            s=s+r;
            count++;
        }
        num=num/10;
    }
    printf("%d\n",count);
    float average=(float)(s)/(float)(count);
    return average;
    return 0;
}
int main(){
    int num,digit;
    printf("Enter a number");
    scanf("%d",& num);
    printf("Enter a number");
    scanf("%d",& digit);
    printf("%.2f\n",Amount_Average(num,digit));
}