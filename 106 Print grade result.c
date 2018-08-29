// Description
// พิมพ์ความหมายของเกรด ต่อไปนี้ 
// A  = Excellent
// B  = Good
// C  = Fair 
// D  = Pass
// E หรือ F = Fail 
// W = Withdraw 
// ตัวอักษรอื่นๆ Unknown

// Input
// เกรด ซึ่งเป็นตัวอักษรหนึ่งตัวเท่านั้น  A,B,C,D,E,F หรือ W (หรือตัวอักษรอื่นๆ จะถือว่าเป็นเกรดที่ไม่รู้จัก = Unknown)

// Output
// พิมพ์ความหมายของเกรดนั้น ซึ่งเป็นคำใดคำหนึ่ง ต่อไปนี้   Excellent ,  Good ,  Fair  , Pass , Fail , Withdraw  หรือ  Unknown

// Hint
// - ใช้โครงสร้าง if-else หรือ switch-case  เลือกพิมพ์ความหมายของแต่ละเกรด 
// - หากเกรดไม่ใช่ตัวอักษร A-F หรือ W ให้พิมพ์ Unknown
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    scanf("%c", &c);
    switch(c){
        case 'A': printf("Excellent"); break;
        case 'B': printf("Good"); break;
        case 'C': printf("Fair"); break;
        case 'D': printf("Pass"); break;
        case 'E': 
        case 'F': printf("Fail"); break;
        case 'W': printf("Withdraw"); break;
        default : printf("Unknown"); break;
    }
    exit(EXIT_SUCCESS);
}