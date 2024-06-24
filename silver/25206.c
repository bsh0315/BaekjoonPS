//dl
#include<stdio.h>
#include<string.h>

typedef struct stuGrade {
    char subName[51];
    char Grade[3];
    float hakjum;
}stuG;

int main(){
    stuG arr[20];
    float sumHakjum = 0;
    float hakjumByGrade = 0;
    float result = 0;

    for(int i =0; i<20 ;++i){
        scanf("%s", arr[i].subName);
        scanf("%f", &arr[i].hakjum);
        scanf("%s", arr[i].Grade);
        
    }
    
    for(int i = 0; i< 20; ++i){
        float intGrade = 0;
        if(strcmp(arr[i].Grade, "P") == 0){
            sumHakjum += 0;
        }
        else{
            sumHakjum += arr[i].hakjum;
        }
        
        if(strcmp(arr[i].Grade, "A+") == 0){
            intGrade = 4.5;
        }
        else if(strcmp(arr[i].Grade, "A0") == 0){
            intGrade = 4.0;
        }
        else if(strcmp(arr[i].Grade, "B+") == 0){
            intGrade = 3.5;
        }
        else if(strcmp(arr[i].Grade, "B0") == 0){
            intGrade = 3.0;
        }
        else if(strcmp(arr[i].Grade, "C+") == 0){
            intGrade = 2.5;
        }
        else if(strcmp(arr[i].Grade, "C0") == 0){
            intGrade = 2.0;
        }
        else if(strcmp(arr[i].Grade, "D+") == 0){
            intGrade = 1.5;
        }
        else if(strcmp(arr[i].Grade, "D0") == 0){
            intGrade = 1,0;
        }
        else if(strcmp(arr[i].Grade, "F") == 0){
            intGrade = 0;
        }
        else{
            intGrade = 0;
        }
        hakjumByGrade += (arr[i].hakjum*intGrade);
    }
    printf("%f\n", hakjumByGrade/sumHakjum );


    return 0;
}
