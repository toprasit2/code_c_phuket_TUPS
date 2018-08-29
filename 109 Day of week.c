// Description
// สำหรับเดือนซึ่งมีวันที่ 1 ตรงกับวันอาทิตย์ (Sunday) ให้โปรแกรมรับค่าวันที่มาหนึ่งวัน แล้วแสดงว่าเป็นวันอะไร ในสัปดาห์ (Sunday, Monday,...) เช่น 
// หากเป็นวันที่ 1 ,8, 15, 22 และ 29 จะได้เป็น Sunday 
// หากเป็นวันที่ 2 ,9, 16, 23 และ 30 จะได้เป็น Monday เป็นต้น

// Input
// ค่าวันที่หนึ่งค่า ซึ่งเป็นจำนวนเต็ม ในช่วง 1-31 เท่านั้น

// Output
// โปรแกรมตรวจสอบวันที่ และพิมพ์ว่าเป็นวันอะไรในสัปดาห์  

// Sunday Monday Tuesday Wednesday Thursday Friday   หรือ   Saturday 

// Hint
// - ใช้ตัวดำเนินการ mod เช่น  day%7 แล้วเลือกว่าจะพิมพ์ วันใด 
// - ใช้โครงสร้างควบคุม if-else หรือ switch-case ก็ได้
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d", &x);
    switch(x%7){
        case 1: printf("Sunday"); break;
        case 2: printf("Monday"); break;
        case 3: printf("Tuesday"); break;
        case 4: printf("Wednesday"); break;
        case 5: printf("Thursday"); break;
        case 6: printf("Friday"); break;
        case 0: printf("Saturday"); break;
    }
    exit(EXIT_SUCCESS);
}