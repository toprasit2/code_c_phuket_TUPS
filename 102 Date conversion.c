// Description
// โปรแกรมรับจำนวนเต็มบวก ซึ่งเป็นตัวเลข 8 หลัก แทนวันที่ ในรูปแบบ yyyymmdd คือ ปี พ.ศ. มีสี่หลัก เดือน 2 หลัก และวันที่ 2 หลัก เช่น 
// วันที่ 17 สิงหาคม 2560 คือตัวเลข 25600817 เป็นต้น จากนั้นจะเอาค่าวันที่ซึ่งได้รับมานั้น แปลงให้เป็น วันที่แบบปี ค.ศ. ในรูปแบบอเมริกัน โดยเรียงลำดับ เป็นตัวเลขเดือน วัน และ ปี เช่น 25600817 แปลงเป็น 08/17/2017 ซึ่งมีมีเครื่องหมาย / คั่นระหว่างตัวเลขวันเดือนปีด้วย 

// Input
// จำนวนเต็มบวก 8 หลัก หนึ่งจำนวน ที่แทนวันที่ เรียงลำดับแบบ ปีเดือนวัน โดยใช้ปี พ.ศ. เช่น 25600530

// Output
// วันที่ ปี ค.ศ. ในรูปแบบอเมริกัน ให้คั่นเดือนวันปี ด้วย / เช่น 05/30/2017  สำหรับตัวเลขเดือนและวัน ถ้าเป็นตัวเลขหลักเดียวให้เติมศูนย์ข้างหน้าด้วย

// Hint
// - ใช้ตัวดำเนินการ บวก ลบ คูณ หาร mod กับจำนวนเต็ม
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d", &x);
    printf("%02d/%02d/%d", x%10000/100, x%100, (x/10000)-543);
    exit(EXIT_SUCCESS);
}