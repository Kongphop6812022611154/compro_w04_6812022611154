#include <stdio.h>

const int GLOBAL_RATE = 10;

void calculate() {
const int LOCAL_BONUS = 50;

printf ("GLOBAL_RATE = %d\n", GLOBAL_RATE);
printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main () {
    calculate() ;
    printf ("GLOBAL_RATE = %d\n", GLOBAL_RATE);

    return 0;
}

//GLOBAL_RATE จะสามารถใช้ได้ทั้งโปรแกรม LOCAL_BONUS จะใช้ได้แค่ใน calculate
//ถ้าเขียน GLOBAL_RATE=20 และ LOCAL=80 ก็สามารถ Run ได้ปกติ
//ที่LOCAL ไม่สามารถเรียกใช้ใน main()ได้เนื่องจาก LOCAL_BONUS จะใช้ได้แค่ใน calculate
//สรุปคือ GLOBAL_RATE จะสามารถใช้ได้ทั้งโปรแกรม LOCAL_BONUS จะใช้ได้แค่ใน calculate
