#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define size 7

int main(){
    int Max_Temp[size], Min_Temp[size],Average_Temperature[size], Avg_Temp_Week = 0;
    int j=0, l=0, Hottest_Day=0, Coldest_Day=0, Coldest_Day_Parody[size], Hottest_Day_Parody[size];
    for(int i=0; i<size; i++){
        printf("Enter Maximum Temperature of Day %d ",i+1);
        scanf("%d",& Max_Temp[i]);
        printf("Enter Minimum Temperature of Day %d ",i+1);
        scanf("%d",& Min_Temp[i]);
        Average_Temperature[i]=(Max_Temp[i]+Min_Temp[i])/2;
        Avg_Temp_Week= Avg_Temp_Week + Average_Temperature[i];

        if(Average_Temperature[i]>Average_Temperature[Hottest_Day]){
            Hottest_Day= i;
            j=0;
        }
            else if(Average_Temperature[i]==Average_Temperature[Hottest_Day]){
                if(Max_Temp[i]>Max_Temp[Hottest_Day]){
                   Hottest_Day=i;
                   j=0;
                }
                else if(Max_Temp[i]==Max_Temp[Hottest_Day]){
                Hottest_Day_Parody[j]=i+1;
                j++;
                }
            }
        if(Average_Temperature[i]<Average_Temperature[Coldest_Day]){
            Coldest_Day = i;
            l=0;
        }
            else if(Average_Temperature[i]==Average_Temperature[Coldest_Day]){
                 if(Min_Temp[i]<Min_Temp[Coldest_Day]){
                    Coldest_Day=i;
                    l=0;
                 }
                 else if(Min_Temp[i]==Min_Temp[Coldest_Day]){
                Coldest_Day_Parody[l]=i+1;
                l++;
                 }
            }
    }
    Avg_Temp_Week=Avg_Temp_Week/size;

    printf("Hottest Day of the Week: %d",Hottest_Day+1);
    for(int i=1; i<j; i++){
        printf("%d ",Hottest_Day_Parody[i]);
        }
    printf("\n");
    printf("Coldest Day of the Week: %d ",Coldest_Day+1);
    for(int i=1; i<l; i++){
        printf("%d ",Coldest_Day_Parody[i]);
        }
    printf("\n");
    printf("Average Temperature of the Week: %d\n",Avg_Temp_Week);

    printf("Avg_Temp: [");
    for(int k=0; k<size; k++){
        printf("%d",Average_Temperature[k]);
        if(k<size-1 ){
            printf(", ");
        }
        }
    printf("]\n");
    return 0;
}