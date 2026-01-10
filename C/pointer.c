#include<stdio.h>
int main(){
    float x= 1.2;
    int* p = &x;
    printf("%d",& p);

    return 0;
}