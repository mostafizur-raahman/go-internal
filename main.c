#include <stdio.h>
#include <stdint.h>   // For int8_t, int16_t, etc.
#include <string.h>
int main(void) {
    // printf("=== Type Sizes in Bytes ===\n\n");
    
    // // Basic integer types
    // printf("char:        %zu byte\n", sizeof(char));
    // printf("short:       %zu bytes\n", sizeof(short));
    // printf("int:         %zu bytes\n", sizeof(int));
    // printf("long:        %zu bytes\n", sizeof(long));
    // printf("long long:   %zu bytes\n", sizeof(long long));
    
    // // Floating point types
    // printf("\n=== Floating Point Types ===\n");
    // printf("float:       %zu bytes\n", sizeof(float));
    // printf("double:      %zu bytes\n", sizeof(double));
    
    // // Fixed-width integer types (exact sizes)
    // printf("\n=== Fixed-Width Types (stdint.h) ===\n");
    // printf("int8_t:      %zu byte\n", sizeof(int8_t));
    // printf("int16_t:     %zu bytes\n", sizeof(int16_t));
    // printf("int32_t:     %zu bytes\n", sizeof(int32_t));
    // printf("int64_t:     %zu bytes\n", sizeof(int64_t));
    
    // // Special types
    // printf("\n=== Special Types ===\n");
    // printf("size_t:      %zu bytes\n", sizeof(size_t));
    
    // // Pointer types
    // printf("\n=== Pointer Types ===\n");
    // printf("int *:       %zu bytes\n", sizeof(int *));
    // printf("char *:      %zu bytes\n", sizeof(char *));
    // printf("void *:      %zu bytes\n", sizeof(void *));
    
    // // Additional useful ones
    // printf("\n=== Additional Types ===\n");
    // printf("unsigned int:    %zu bytes\n", sizeof(unsigned int));
    // printf("unsigned long:   %zu bytes\n", sizeof(unsigned long));
    // printf("long double:     %zu bytes\n", sizeof(long double));

    char a[] = "hello";
char b[] = "hello";

if( strcmp(a,b) == 0 ){
    printf("sotoo\n");
}

if (a == b) {
    printf("equal\n");     // never prints
} else {
    printf("not equal\n"); // prints this -- a and b are at different addresses
}


}