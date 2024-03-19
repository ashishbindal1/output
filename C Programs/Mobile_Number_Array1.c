#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define size 10

int arr[size];

char* getLocation(){
    char*Country_Name=NULL;
    size_t bufferSize = 0;
    printf("Enter your country name: ");
    getline(&Country_Name, &bufferSize, stdin);
    int length = strlen(Country_Name);
    if (Country_Name[length - 1] == '\n') {
        Country_Name[length - 1] = '\0';
    }
    for (int i = 0; i < length; i++) {
        Country_Name[i] = toupper(Country_Name[i]);
    }
    return Country_Name;
}

char* getCountry_Code(char* countryName){
    char* ISO_Code=NULL;
    if(strcmp(countryName, "INDIA")==0){
        ISO_Code=(char*)malloc(4* sizeof(char));
        strcpy(ISO_Code,"IND");
    }
    else if(strcmp(countryName, "PAKISTAN")==0){
        ISO_Code=(char*)malloc(4* sizeof(char));
        strcpy(ISO_Code,"PAK");
        }
    else if(strcmp(countryName, "UNITED KINGDOM")==0){
        ISO_Code=(char*)malloc(4* sizeof(char));
        strcpy(ISO_Code,"GB");
        }
    else if(strcmp(countryName, "CANADA")==0){
        ISO_Code=(char*)malloc(4* sizeof(char));
        strcpy(ISO_Code,"CAN");
        }
    else{
        ISO_Code=(char*)malloc(8* sizeof(char));
        strcpy(ISO_Code,"UNKNOWN");
        }
    return ISO_Code;
}

int Country_Code(char* ISO_Code){
    int country_code;
    if(strcmp(ISO_Code, "IND")==0){
        country_code= 91;  
    }
    else if(strcmp(ISO_Code, "PAK")==0){
        country_code= 92;
        }
    else if(strcmp(ISO_Code, "GB")==0){
        country_code= 44;
        }
    else if(strcmp(ISO_Code, "CAN")==0){
        country_code= 1;
        }
    else{
        country_code= 0;
        }
    return country_code;
    }

int Max_Digit_MobileNumber(){
    int max= arr[0];
    for(int k=1; k<size; k++){
        if(arr[k]>max){
            max=arr[k];
        }
        }
    return max;
}

int main(){
    char* countryName = getLocation();
    char* ISO_Code = getCountry_Code(countryName);
    if (ISO_Code == NULL) {
        printf("Memory allocation failed.\n");
        free(countryName);
        return 1;
    }
    int dialing_code=Country_Code(ISO_Code);
    free(countryName);
    free(ISO_Code);
    if(dialing_code<=0){
        printf("Dialing code Not found !!\nInvalid Country name or Location may not exist");
    }
    else if(dialing_code!=0){
    printf("Location found...\nPlease Enter your Mobile number\n");
    for(int i=0; i<size; i++){
        scanf("%1d", &arr[i]);  //with %"1d"-:Array will now be entered in a single line.
    }
    printf("[+%d",dialing_code);
    for(int j=0; j<size; j++){
        printf("%d",arr[j]);
        }
    printf("]\n");
    int maximum = Max_Digit_MobileNumber();
    printf("Maximum Digit %d\n", maximum);
    for(int i=0; i<size; i++){
        if(arr[i]== maximum){
            printf("Index %d\n", i);
        }
    }
    }
    return 0;
}