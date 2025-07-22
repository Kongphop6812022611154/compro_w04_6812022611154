#include <stdio.h>

void countCall() {
    static int counter = 0;                                    
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
//Call function: counter = 2


//Non-static Variable คือเมื่อเวลาเรียกใช้ฟังก์ชั่นจะไม่นำค่าเก่ามาคำนวณ ส่วน static variable คือเมื่อเวลาเรียกใช้ฟังก์ชั่นจะนำค่าเก่ามาคำนวณด้วย
