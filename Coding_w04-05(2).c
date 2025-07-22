#include <stdio.h>

void countCall() {
    int counter = 0;
    counter++;
    printf("Call function: counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall();
    printf("After first call:\n");
    countCall();
    return 0;
}

//ผลลัพธ์ที่ได้คือ Starting function calls...
//Call function: counter = 1
//After first call:
//Call function: counter = 1
