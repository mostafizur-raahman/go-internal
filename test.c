#include <stdio.h>
#include <string.h>

// YOU NEED TO WRITE THIS FUNCTION
void safe_copy(char *dest, size_t dest_size, const char *src) {
   strncpy(dest, src, dest_size - 1);
   dest[dest_size-1] = '\0';
}

int main(void) {
    char src[] = "This is a very long string";
    char dest[10];
    
    safe_copy(dest, sizeof(dest), src);
    printf("%s\n", dest);
    
    return 0;
}