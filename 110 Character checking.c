// Description
// โปรแกรมตรวจสอบตัวอักษร ว่าจัดอยู่ในกลุ่มใด 
// a-z  คือ Small letter
// A-Z  คือ Capital letter 
// 0-9  คือ Digit 
// อักขระอื่นๆ ทั้งหมด (เช่น * / # $ % & ... ) คือ Special symbol


// Input
// โปรแกรม รับอักขระ 1 ตัวอักษร เพื่อตรวจสอบว่าจัดอยู่ในกลุ่มใด

// Output
// ให้พิมพ์กลุ่มของตัวอักษรที่ตรวจสอบได้ แล้วตามด้วย อักขระนั้นที่โปรแกรมรับเข้ามา ภายในเครื่องหมาย single quote ดังรูปแบบนี้ เช่น

// Capital letter 'B' 
// Small letter 'e'
// Special symbol '#'
// Digit '7'

// เป็นต้น

// Hint
// - ใช้ if-else ดีกว่า switch-case
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    scanf("%c", &c);
    if( c >= 'A' && c <= 'Z')
        printf("Capital letter '%c'", c);
    else if( c >= 'a' && c <= 'z')
        printf("Small letter '%c'", c);
    else if( c>= '0' && c <= '9')
        printf("Digit '%c'", c);
    else
        printf("Special symbol '%c'", c);
    exit(EXIT_SUCCESS);
}