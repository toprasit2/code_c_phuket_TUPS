// Description
// พิมพ์ข้อความ Hello และตามด้วยชื่อภายในเครื่องหมาย double quote เช่น 

// Hello "John Wick"

// Input
// ชื่อ ซึ่งเป็นสตริง (ข้อความ ตัวอักษร) ความยาวไม่เกิน 30 ตัวอักษร

// Output
// พิมพ์ข้อความ Hello และตามด้วยชื่อซึ่งรับมาจากอินพุต โดยชื่อถูกคร่อมด้วยเครื่องหมาย double quote เช่น 

// Hello "John Wick"

// Hint
// - ให้ประกาศตัวแปรเก็บสตริงและรับสตริง โดยใช้คำสั่ง gets เช่น 
//         char name[30];  
//         gets(name); 

// - ใช้ %s ในคำสั่ง printf เพื่อแสดงสตริง 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[30];
    gets(name);
    printf("Hello \"%s\"",name);
    exit(EXIT_SUCCESS);
}