#include <stdio.h>
#include <string.h>
int main(void) {
    char ch[6];
    ch[0] = 'a';
    ch[1] = 'b';
    ch[2] = '\0';
    ch[3] = 'd';
    ch[4] = 'e';
    ch[5] = '\0';
    printf("%s\n", ch);
    printf("%zu %c\n", strlen(ch), ch[4]);
}