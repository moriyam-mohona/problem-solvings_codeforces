#include <stdio.h>

void print_digits(int n){
  
  if(n == 0)
      return;
  else{
    int val1 = n % 10; 
    int val2 = n / 10; 
    
    print_digits(val2);
    printf("%d ", val1);
  }
}

int main()
{
  int t;
  scanf("%d", &t); 
  
  while(t--){
    int n;
    scanf("%d", &n);
    
    if(n==0){
      printf("0");
    }else{
      print_digits(n);
    }
      printf("\n");

  }
  return 0;
}    