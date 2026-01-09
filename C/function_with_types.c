
// Function with return and parameter 
// #include<stdio.h>
// int sum(int x, int y){
//     int sum=x+y;
//     return sum;
// }

// int main(){
//     int a,b;
//     scanf("%d %d", &a , &b);
//     printf("%d", sum(a,b));
//     return 0;
// }

// Function with return and no parameter 
// #include<stdio.h>
// int sum(){
//     int a,b;
//     scanf("%d %d", &a, &b);
//     int sum=a + b;
//     return sum;
// }

// int main(){
//     int s = sum();
//     printf("%d", s);
//     return 0;
// }

// Function with no return and parameter 
// #include<stdio.h>
// void sum(int x, int y){
//     int sum=x+y;
//     printf("%d", sum);
// }

// int main(){
//     int a,b;
//     scanf("%d %d", &a , &b);
//     sum(a,b);
//     return 0;
// }

// Function with no return and no parameter 
#include<stdio.h>
void sum(){
    int a,b;
    scanf("%d %d", &a , &b);
    int sum=a+b;
    printf("%d", sum);
}

int main(){
    sum();
    return 0;
}