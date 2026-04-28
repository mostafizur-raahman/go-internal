#include <stdio.h>
#ifdef DEBUGG
#define DEBUG_LOG(fmt, ...) \
    do { \
        fprintf(stderr, "[%s:%d] " fmt "\n", __FILE__, __LINE__, ##__VA_ARGS__); \
    }while(0)
#else
#define DEBUG_LOG(fmt, ...) ((void)0)
#endif

void process_data(){
    DEBUG_LOG("ENTER TO PROCESS DATA");
    for(int i = 0; i < 10; i++){
        DEBUG_LOG("PROCESSING DATA %d %d\n", i+1, i+ 1);
    }

   DEBUG_LOG("END OF PROCESSING DATA...");
}
int main(void){
    printf("application started....\n");
    process_data();
    DEBUG_LOG("Application finished successfully.\n");
}