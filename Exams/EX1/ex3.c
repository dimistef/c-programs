#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num;
    int evenIsUsed = -1;
    int oddIsUsed = -1;
    int posIsUsed = -1;
    int negIsUsed = -1;

    if (strcmp(argv[1], "-r") == 0) {
        int start = atoi(argv[2]);
        int end = atoi(argv[3]);

        for (int i = start; i <= end; i++) {
            printf("%d\n", i);
        }
    } else {
        for (int i = 1; i < argc; i++) {
            if (strcmp(argv[i], "-e") == 0) {
                evenIsUsed = 0;
            }
            if (strcmp(argv[i], "-o") == 0) {
                oddIsUsed = 0;
            } 
            if (strcmp(argv[i], "-p") == 0) {
                posIsUsed = 0;
            }
            if (strcmp(argv[i], "-n") == 0) {
                negIsUsed = 0;
            }
        }

        while (scanf("%d", &num) != EOF) {
            if (evenIsUsed == 0) {
                if (num % 2 == 0) {
                    printf("%d\n", num);
                } 
            }
            if (oddIsUsed == 0) {
                if (num % 2 != 0) {
                    printf("%d\n", num);
                } 
            }
            if (posIsUsed == 0) {
                if (num >= 0) {
                    printf("%d\n", num);
                } 
            }
            if (negIsUsed == 0) {
                if (num < 0){
                    printf("%d\n", num);
                } 
            }
        }
    }

    return 0;
}