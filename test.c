#include<stdio.h>

int main(){
    int n = 19;
    const int m = 20;
    int *ptr = &m;
    n = 10;
    *ptr = 30;

    printf("%d\n", m);

}