#include <stdio.h>

#define NUM 42
#define PI 3.14
#define myint int //preimenuvane na int v myint
#define ako if //preimenuvane na if v ako
#define SUM(x,y) x+y
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define FORI(a,b,s) for(int i=a; i<=b; i+=s)
#define N 1
#define DEBUG
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
        printf("OS not defined!\n");
    #endif
    #undef OS //undefinirane na OS
    /*
    int a = 10, b = 20;
    int c = a + b;

    #ifdef DEBUG
        printf("a = %d\nb = %d\n", a, b);
    #endif
    printf("c = %d\n", c);

    #if N == 1
        printf("Hello\n");
    #elif N == 2
        printf("UKTC\n");
    #elif N == 3
        printf("Linux\n");
    #endif

    myint customInt = NUM + NUM;

    int a = SUM(5, 10) * 2;
    int b = MAX(4, 10);

    FORI(0, 100, 5) {
        printf("%d\n", i);
    }

    printf("a = %d\nb = %d\n", a, b);

    ako(a > b) { //custom if
        printf("Hello\n");
    } else {
        printf("Bye bye\n");
    }
    */
    return 0;
}