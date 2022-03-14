#include <stdio.h>

#define OS 1

int main() {
    #ifdef OS
        #if OS == 1
            printf("Linux\n");
        #elif OS == 2
            printf("Windows\n");
        #elif OS == 3
            printf("macOS\n");
        #endif
    #else
        fprintf(stderr, "OS is undefined!\n");
    #endif

    return 0;
}