//진법 변환
#include<stdio.h>
#include<string.h>
#include<math.h>

int change(char *N, int B, int size);

int main(){
    char N[100];
    int  B, size;

    scanf("%s %d", N, &B);
    size = strlen(N);

    printf("%d\n", change(N, B, size));
    
    
    return 0;
}

int change(char *N, int B, int size){
    int result =0;
        if(B<= 10){
            for(int i = size-1; i>=0; --i){
                result += (N[i]-48)*pow(B, size-i);
            }
        }
        else{
            for(int i = size-1; i>=0; --i){
                if(N[i] >= '0' && N[i] <= '9'){
                    result += (N[i]-'0')*pow(B, size-i-1);
                }
                else if(N[i] >= 'A' && N[i] <= 'Z'){
                    result += (N[i]-'A'+ 10)*pow(B, size-i-1);
                }
            }
        }
     
    return result;  
}