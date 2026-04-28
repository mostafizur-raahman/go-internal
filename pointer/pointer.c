#include<stdio.h>
void swap(int *a, int *b ){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void swap_char(char *a, char *b){
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

int sum(const int *arr, size_t len){
    int sum = 0;
    const int *ptr; // working ptr
    for( ptr = arr; ptr < arr + len; ptr++){
        sum += *ptr;
    }
    return sum;
}
int main(void){
    int x = 10, y = 20;
    printf("%d %d\n", x, y);
    swap(&x,&y);
    printf("%d %d\n", x, y);
    char a = 'a', b = 'b';
    printf("%c %c\n", a, b);
    swap_char(&a,&b);
    printf("%c %c\n", a, b);

    int numbers[] = { 10,20,30,40};
    int len = sizeof(numbers)/sizeof(numbers[0]);
    int res = sum(numbers, len);
    printf("sum is %d\n", res);
}