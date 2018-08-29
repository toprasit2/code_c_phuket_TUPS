// Description
// Print exactly the message below in 2 lines where x is the input character that the program reads in.
// จงพิมพ์ข้อความสองบรรทัดต่อไปนี้ (รวมพวกตัวอักษร ' single quote และ  " double quote ด้วย) โดยที่ x คือตัวอักษรที่โปรแกรมอ่านเข้ามา 

// "Hello World!"
// Goodbye 'x'

// Input
// The program reads 1 character as input.

// โปรแกรมรับตัวอักษร 1 ตัวอักษร 

// Output
// The program prints exactly the message below (including the single quote and double quote characters) in 2 lines. Note that x is the input character that the program reads in.
// ข้อความสองบรรทัดต่อไปนี้ (รวมพวกตัวอักษร ' single quote และ  " double quote ด้วย) โดยที่ x คือตัวอักษรที่โปรแกรมอ่านเข้ามา 

// "Hello World!"
// Goodbye 'x'

// Hint
// - ประกาศตัวแปร char และรับตัวอักษรหนึ่งตัว
// - ในคำสั่ง printf ถ้าต้องการพิมพ์ ตัวอักษร single quote หรือ double quote ให้ใช้ \ นำหน้า เช่น \' และ \" 
//       printf("\'abc\"xyz\'\n");  ได้ผลลัพธ์คือ  'abc"xyz '
#include <stdio.h>
#include <stdlib.h>

int main()
{   char a;
    scanf("%c",&a);
    printf("\"Hello World!\"\n");
    printf("Goodbye '%c'",a);
    exit(EXIT_SUCCESS);
}