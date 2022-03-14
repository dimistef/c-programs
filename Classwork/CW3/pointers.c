#include <stdio.h>

void increment(int num) {
    num++;
}

int main() {
    int num = 20;
    int* ptr = &num;
    double grade = 5.62;
    double* ptrGrade = &grade;

    printf("%p\n", ptr);
    printf("%d\n", *ptr);
    printf("%p\n", ptrGrade);

    return 0;
}