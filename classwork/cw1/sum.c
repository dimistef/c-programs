#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("Arguments count: %d\n", argc);

    int sum = 0;

    for (int i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
        sum += atoi(argv[i]);
    }

    printf("SUM: %d\n", sum);
    return 0;
}