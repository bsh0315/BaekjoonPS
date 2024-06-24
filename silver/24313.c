//Big O notation
#include<stdio.h>

int main(){
    int a1, a2, c, n0;
    int result =0;

    scanf("%d %d %d %d",&a1, &a2, &c, &n0);
    
    for(int i = n0; i<=100; ++i){
        if(a1*i+a2 > c*i){
            result = 0;
            break;
        }
        else{
            result =1;
        }
    }
    printf("%d", result);
    return 0;
}
