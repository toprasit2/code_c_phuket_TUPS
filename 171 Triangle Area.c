// Description
// เราสามารถคำนวณหาพื้นที่ของรูปสามเหลี่ยมใดๆ จากความยาวด้าน 3 ด้าน(a, b และ c) ของรูปสามเหลี่ยมนั้น โดยใช้สูตรคำนวณพื้นที่ ดังนี้ 
//  Area = √S(S-a)(S-b)(S-c) 
// โดยที่ S = (a+b+c)/2  

// Input
// จำนวนเต็มบวก 3 ค่า ซึ่งเป็นความยาวด้านของรูปสามเหลี่ยม

// Output
// พื้นที่ของรูปสามเหลี่ยม ให้แสดงเป็นเลขทศนิยม 4 ตำแหน่ง

// Hint
// - ใช้ฟังก์ชัน sqrt() จาก math.h

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    double area, S;
    S = (double)(a+b+c)/2;
    area = sqrt(S*(S-a)*(S-b)*(S-c));
    printf("%.4lf", area);
    exit(EXIT_SUCCESS);
}