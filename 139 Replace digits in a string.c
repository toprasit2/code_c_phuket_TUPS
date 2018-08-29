// Description
// จากสตริงค่าหนึ่ง(ข้อความ) หากมีตัวเลขปรากฏอยู่ ให้แทนที่ตัวเลขด้วยตัวอักษร X ทั้งหมด เช่น 
// จาก Hello 2017  กลายเป็น Hello XXXX 
// หรือ จาก Date 14 September 2017 กลายเป็น Date XX September XXXX เป็นต้น

// Input
// สตริงหรือข้อความหนึ่งบรรทัด (ความยาวไม่เกิน 100 ตัวอักษร)

// Output
// ผลลัพธ์มี สองบรรทัด
// บรรทัดแรก มีจำนวนเต็มสองจำนวน เป็นจำนวนตัวเลขที่นับได้ในสตริงดั้งเดิม แล้วตามด้วย ความยาวของสตริง 
// ส่วนบรรทัดที่สอง แสดงค่าสคริงใหม่ ที่ทุกตัวเลขถูกแทนที่ด้วย X หมดแล้ว 

// Hint
// -- ใช้คำสั่ง gets หรือ scanf ในการรับสตริงทั้งบรรทัด ดังนี้ เช่น 
//       char str[100]; 
//       gets(str);  หรือ scanf("%[^\n]s", str); 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int countDigit = 0;
    int i;
    gets(str);
    for(i=0; i<strlen(str); i++){
        if(str[i] >= '0' && str[i] <= '9'){
            str[i] = 'X';
            countDigit++;
        }
    }
    printf("%d %d\n", countDigit, strlen(str));
    printf("%s", str);
    exit(EXIT_SUCCESS);
}