// Description
// ให้จัดแบ่งกลุ่ม ตามรหัสนักศึกษา 3 ตัวสุดท้าย โดยแบ่งออกเป็น 8 กลุ่ม A-H วิธีการแบ่งกลุ่ม ให้นำรหัสนักศึกษา 3 ตัวสุดท้าย หารด้วย 8 ถ้าเหลือเศษเท่าไหร่ จะได้กลุ่มดังนี้ 
// เหลือเศษ 0 ได้อยู่กลุ่ม A (หาร 8 ลงตัว) 
// เหลือเศษ 1 ได้อยู่กลุ่ม B  
// เหลือเศษ 2 ได้อยู่กลุ่ม C  
// เหลือเศษ 3 ได้อยู่กลุ่ม D
// เหลือเศษ 4 ได้อยู่กลุ่ม E
// เหลือเศษ 5 ได้อยู่กลุ่ม F  
// เหลือเศษ 6 ได้อยู่กลุ่ม G 
// เหลือเศษ 7 ได้อยู่กลุ่ม H

// Input
// จำนวนเต็ม 1 ค่า (รหัสนักศึกษา 3 หลักสุดท้าย)

// Output
// กลุ่มที่จัดได้ คือ ตัวอักษรหนึ่งตัว  (A - H)

// Hint
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d", &x);
    switch(x%8){
        case 0: printf("A"); break;
        case 1: printf("B"); break;
        case 2: printf("C"); break;
        case 3: printf("D"); break;
        case 4: printf("E"); break;
        case 5: printf("F"); break;
        case 6: printf("G"); break;
        case 7: printf("H"); break;
    }
    exit(EXIT_SUCCESS);
}