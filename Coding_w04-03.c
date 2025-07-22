#include <stdio.h>

int main () {
    char NameJa = 'K';                            // ประกาศ NameJa = 'K'
    int AgeJa = 18;                               // int ใช้สำหรับจำนวนเต็ม ตัวแปร AgeJa = 18
    float WeightJa = 85.50;                       // float ใช้สำหรับเลขทศนิยม ตัวแปร WeightJa = 85.50
    char GenderJa[] = "Male";                     // ตัวแปรนี้เก็บเพศ = "Male"

    printf("nameInitial = %c\n", NameJa);         // แสดงผลตัวแปร NameJa ด้วย %c
    printf("age = %d\n", AgeJa);                  // แสดงผลตัวแปร AgeJa ด้วย %d
    printf("weight = %f\n", WeightJa);            // แสดงผลตัวแปร WeightJa ด้วย %f
    printf("gender = %s\n", GenderJa);            // แสดงผล string ด้วย %s
    return 0;                                     // ส่งค่ากลับ 0 เพื่อบอกว่าโปรแกรมทำงานจบเรียบร้อย

}
