#include <stdio.h>

#define MIN(a,b) a < b ? a : b
int main(void){
    int x = 10 , y = 11;
    printf("x is : %d y is %d MIN is : %d\n", x, y , MIN(x,y));

      int result = MIN(5, 4 + 1);
      printf("res %d\n", result);
}